#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

//  EVEN MEAN NUMBER IS PAIR  (ZAWJYY)


void IsEven(string message)
{
  short   nbr = 0 ;

  
   cout<<message<<endl ;
   cin>> nbr ;


  
   nbr % 2 == 0 ? cout<<  nbr * 8 :cout<<  nbr * 9 <<endl ;
   
}
int main() {
   
cout<<"The result is " ; 
IsEven("Enter nbr !") ;


     cout<<"\n" ;
    return 0;
}
