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


void functionUsingByValue(int x)
{

    x++ ;

}


void functionUsingByReference(int &x)
{

    x++ ;
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int a = 10 ;

functionUsingByValue(a)  ;

printf("pass parameter by Value a = %d" ,a)  ;


functionUsingByReference(a) ;
printf("\n pass parameter by Reference a = %d" ,a)  ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
