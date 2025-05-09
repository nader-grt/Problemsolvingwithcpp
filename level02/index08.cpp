#include <iostream>
#include <cmath>
#include <string>
using namespace std ;



short  ReadNumberPositive(string message)
{
    short  nbr  ;
    do
    {
         cout<<message<<endl ;
         cin>>nbr ;
    } while (nbr < 0);
    return nbr ;
    
}
   void checkNumberIsDivideByTwoNumber(short nbr , short x , short y)
   {
  


     (nbr % x == 0  && nbr % y == 0) ? cout<<"IS DIVIDE "<<endl  : cout<<"IS NOT DIVIDE" <<endl ;
   }
int main() {
   
short nbr , x ,y ;
nbr = ReadNumberPositive("enter numbernbr  positive !") ;

x = ReadNumberPositive("enter number x positive !") ;
y  = ReadNumberPositive("enter number y positive !") ;
checkNumberIsDivideByTwoNumber(nbr,x,y)  ;
// 12  7 5   false 
//12  2 6   true 
  
     cout<<"\n" ;
    return 0;
}
