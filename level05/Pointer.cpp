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



int a = 10  , b = 20;

printf("the value of a = %d",a) ;
cout<<"\nthe address of a = " <<&a ;

cout<<"\n ======================================================\n \n \n" ;
printf("the value of b = %d",b) ;
cout<<"\nthe address of b = " <<&b ;

int * p = &a ;


     cout<<"\n" ;
     cout<<"\n \n \n \n" ;


cout<<"\nthe pointer value of p with address a = " <<p ;
 p = &b ;

cout<<"\nthe pointer value of p with address b = " <<p ;

if( p == &a)cout<<"\n YES !" ;
else
cout<<"\n NO" ;




   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
