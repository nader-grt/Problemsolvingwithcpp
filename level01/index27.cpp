#include <iostream>
#include <cmath>
using namespace std ;
//Problem factorial 


int ReadNumberPositive(string message)
{
    int nbr =  0;
    do
    {
       cout<<message<<endl ;
       cin>>nbr ;
    } while (nbr < 0);
    
    return nbr ;
}

void factorialNumber(int &number){
    int f = 1 ,count = 0 ;
    int facNumber = number ;
    do
    {
       f= number *f ;
       number-- ;
    } while (number >0);
cout<<"\n The result of  number of factorial is "<<facNumber <<"!  = "<<f<<endl ;
}
int main() {

   int number =ReadNumberPositive("Enter the number positive please ! ") ;
   factorialNumber(number) ;

     cout<<"\n" ;
    return 0;
}
