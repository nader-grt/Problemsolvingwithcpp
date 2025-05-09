#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


   string PrintEvenOrOdd(short nbr)
   {
     return nbr %2 == 0 ? "Even" :"Odd" ;
   }
int main() {
   
cout<<"\n "<<PrintEvenOrOdd(10) ;
cout<<"\n "<<PrintEvenOrOdd(20) ;
cout<<"\n "<<PrintEvenOrOdd(42) ;
cout<<"\n "<<PrintEvenOrOdd(7) ;


     cout<<"\n" ;
    return 0;
}
