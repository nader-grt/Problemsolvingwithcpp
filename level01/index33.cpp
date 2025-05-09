#include <iostream>
#include <cmath>

using namespace std ;

// Problem - Piggy Bank Calculator

enum Pennies {Nickles=5,Peeny=1,Dimes=10,Quarter=25,Dollar=100}  ;
float ReadNumberPositive(string message)
{
    float nbr = 0 ;
    do
    {
     cout<<message<<endl ;
     cin>>nbr ;
    } while (nbr <0);
    
    return nbr ;
}

float PrintTotalPennies(int penny,int nickles,int dimes,int quarter,int dollar)
{
    int totalPennies  = 0 ;
     totalPennies = ( (Pennies::Peeny ) * penny    + (Pennies::Nickles )* nickles + (Pennies::Dimes )* dimes + (Pennies::Quarter )* quarter + (Pennies::Dollar )* dollar) ;
        return totalPennies ;
}

int main() {
   
int  penny =ReadNumberPositive("Enter number pennies positive ") ;
int nickles =ReadNumberPositive("Enter number  nickles positive ") ;
int dimes =ReadNumberPositive("Enter number dimes positive ") ;
int quarter =ReadNumberPositive("Enter number quarter positive ") ;
int dollar =ReadNumberPositive("Enter number dollar positive ") ;
float totalDollars =  (PrintTotalPennies(penny,nickles,dimes,quarter,dollar) /100) ;

cout<<"\n The result of total pennies is \t "<<PrintTotalPennies(penny,nickles,dimes,quarter,dollar)<<endl ;
cout<<"\n The result of total dollars is \t "<<totalDollars<<endl ;


     cout<<"\n" ;
    return 0;
}
