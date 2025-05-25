#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     


#include "LibraryOrPackage/MyLib.h" 


using namespace std ;

void DisplayStaticVar()
{

   static int Number =3 ;
   // cout<<Number <<endl ;
    cout<<"Number inside function Number is \t "  << Number << "\n" ;
   
    Number++ ;

 

}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                static variable  c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


//int Number = MyLib::ReadNumber("\n Enter a number") ;


DisplayStaticVar() ;

DisplayStaticVar() ;

DisplayStaticVar() ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
