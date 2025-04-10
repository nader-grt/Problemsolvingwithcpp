#include <iostream>
#include <cmath>
using namespace std ;
//Problem IsPrimeNumber 

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
void PrintNumberPrime(int &number)
{
    int m = round(number/2) ;
    int count =2
    ;
    do
    {
        if(number % count == 0) 
        
   {
         cout<<number<<" Number is Not Prime \t "<<endl ;
    
  return ;
   }
     
    
    
    count++ ;
    } while (count<=m);

    
         cout<<number<<" Number is Prime \t "<<endl ;
     
     
}
int main() {
   int number = ReadNumberPositive("Enter the number positive please ! ") ;
   PrintNumberPrime(number)  ;

     cout<<"\n" ;
    return 0;
}
