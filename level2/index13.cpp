#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


void SwapNumber(short &nbr1 ,short &nbr2)
{
     short temp ;
     temp = nbr1 ;
     nbr1 =nbr2 ;
     nbr2 = temp ;

}
int main() {
   
  short A ,B  ;
  cout<<"ENter the first number is "<<endl ;
  cin>>A  ; 

  cout<<"ENter the second  number is "<<endl ;
  cin>>B  ; 
  cout<<"*************************************** \n \n _\n"  ;
  cout<<"The first number before swap function A = "<<A <<endl ;
    cout<<"The second number before swap function B = "<<B <<endl ;
  cout<<"\n \n \n \n " ;

  SwapNumber(A,B)  ;
  cout<<"The first number after inside  swap function A = "<<A <<endl ;
    cout<<"The second number after inside  swap function B = "<<B <<endl ;

     cout<<"\n" ;
    return 0;
}
