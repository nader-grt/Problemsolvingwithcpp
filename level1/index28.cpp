#include <iostream>
#include <cmath>
using namespace std ;


int ReadNumberPositive(string message)
{
    int nbr = 0 ;
    do
    {
     cout<<message<<endl ;
     cin>>nbr ;
    } while (nbr <0);
    
    return nbr ;
}
void PowerNumber(int &number ,int &power)
{
            int p = 1  ,counter = 0;
        do
        {
            p = number *p ;
            counter = counter +1 ;
         
        } while (counter != power);
        
      cout<<"\n The result power number of "<<number <<" is "<<p<<endl ;
}
int main() {
   
   int number = ReadNumberPositive("Enter the number you want ") ;
   int power = ReadNumberPositive("Enter the power of number you want ") ;
   PowerNumber(number ,power) ;
   

     cout<<"\n" ;
    return 0;
}
