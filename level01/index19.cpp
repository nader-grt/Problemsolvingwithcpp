#include <iostream>
#include <cmath>

using namespace std ;

// problem of  Circle Area Along the Circumference  area = l * l /4 *Pi length = 20 the result 31.831
int ReadNumberPositive(string message)
{
    int nbr = 0 ;
    do
    {
       cout<<message <<endl ;
       cin >>nbr ;

    } while (nbr <0);
    
    return nbr ;
}

int main() {
   const float Pi = 3.14195 ;
float area = 0 ,length = 0;
length = ReadNumberPositive("Enter the length of Circle Area Along the Circumference please !") ;
area =(length * length)/(4 * Pi) ;
cout <<"The result of  Circle Area Along the Circumference is \t"<<area <<endl ;
     cout<<"\n" ;
    return 0;
}
