#include <iostream>
#include <cmath>

using namespace std ;

//Probel sum for numbers ODD impaire 
int ReadNumberPositive(string message)
{
    int nbr = 0 ;
    do
    {
     cout<<message<<endl ;
     cin>>nbr ;
    } while (nbr <0);
    
    return nbr  ;
}
void SumNumbersOdd(int &number)
{
    int sum = 0 ,count = 1 ;
    do
    {
       
       if(count % 2 != 0)
      {
       
         sum = sum+count ;
      }
       count=count + 1;
      
    } while (count != number);
    
cout<<"\nThe result of summation  numbers odd is \t "<<sum<<endl ;
}
int main() {
   
int number = ReadNumberPositive("Enter a positive number please ! ") ;
SumNumbersOdd(number) ;

     cout<<"\n" ;
    return 0;
}
