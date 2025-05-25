#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

int a = 20 ;
int &x  = a ;

cout<<"\n address of a "<<&a ;

cout<<"\n address of x "<<&x ;


  cout<<"\n \n \n =====================================================================\n";
cout<<"\n value of a "<<a ;


cout<<"\n value of x "<<x ;

int * p ;
p  = &a ;

cout<<"\n the value of PONTER IS address of p = &a  \t  "<<p ;
cout<<"\n address of a "<<&a ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
