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
   string FullName  ;
public:

     static int function1()
     {

        return 10 ;
     }

     int function2()
     {
        return 20 ;
     }
    clsA(/* args */)
    {

    }
    ~clsA()
    {


    }
};


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

cout<<clsA::function1()<<endl   ;


clsA A1, A2,A3 ;

cout<<A1.function1() <<endl ;
cout<<A1.function2() <<endl ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
