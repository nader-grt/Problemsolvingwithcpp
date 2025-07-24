#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;




class clsA
{
private:
    int _var1 = 10 ;
protected:
   int _var2 =20 ;
public:
   int  var3 = 100 ;
    clsA(/* args */)
    {


    }
    ~clsA()
    {

    }

    friend int MySum(clsA A1)  ;
};


int MySum(clsA B1) 
{


return B1.var3  + B1._var1 + B1._var2 ;

}




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;
      clsA A1 ;

     
cout<<MySum(A1)   ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
