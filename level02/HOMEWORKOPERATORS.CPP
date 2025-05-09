#include <iostream>
#include <cmath>
#include <string>
using namespace std ;


int main() {
   
bool result  ;
result = !( 5 > 6  || 7 == 7)  &&  !(1 || 1) ;
result = !( 15 > 6  || 7 == 7)  ||  (1 || 1) ;
cout  <<"\n The result is "<<result <<endl ;
     cout<<"\n" ;
    return 0;
}
