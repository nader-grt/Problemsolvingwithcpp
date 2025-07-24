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

    friend class clsB ;
};




class clsB
{

public:
    void display(clsA A1)
    {
        cout<<"\n The value of var3 = "<<A1.var3 <<endl ;
        cout<<"\n The value of var1 = "<<A1._var1<<endl ;
        cout<<"\n The value of var2 = "<<A1._var2 <<endl ;
    }
    clsB(/* args */)
    {


    }
    ~clsB()
    {

    }
};



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;
      clsA A1 ;

     clsB B1 ;

     B1.display(A1)  ;

















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
