

#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     


#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;


double MySum(double a, double b) {
return (a + b);
}


int MySum(int a, int b) {
return (a + b);
}


int MySum(int a, int b, int c) {
return (a + b + c);
}


int MySum(int a, int b, int c, int d) {
return (a + b + c + d);
}




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                FUNCTION OVERLOADING  using c++                ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 





cout<<"   "<<MySum(10.3,10.7)  <<endl    ;


















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
