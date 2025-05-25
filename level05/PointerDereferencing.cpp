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



int a = 300 ;
cout<<"\n The value of a is "<<a ;
cout<<"\n The address of a is "<<&a ;

 cout<<"\n======================================================================\n";

 int * p = &a  ;

 cout<<"\n The value of pointer is "<< p ;


 cout<<"\n \n \n======================================================================\n";

int b = 20 ;

cout<<"\n the value of b"<<b ;
cout<<"\n the address the b in memory "<<&b ;



int * ptr  ;
ptr = &b ;
*ptr = 2000 ;
 cout<<"\n \n \n=======================  POINTER ALWAYS STORE ADDRESS OF OTHER VARIABLE              ===============================================\n";

cout<<"\n the value of pointer p is "<<ptr ;
cout<<"\n the address the pointer  in memory "<<&ptr;



cout<<"\n the value of new  b modify by Pointer "<<b ;
cout<<"\n the value  the pointer   "<<*ptr ;




int x, * p1;
// Wrong!
// p is an address but x is not
p1 = x;
// Correct!
// p is an address and so is &x
p1 = &x;
// Wrong!
// &x is an address
// *p is the value stored in &x
*p1 = &x;
// Correct!
// *p is the value and so x
*p1 = x;


















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
