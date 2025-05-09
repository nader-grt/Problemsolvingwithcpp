#include <iostream>
#include <cmath>

using namespace std ;

//Problem of Circle Area Inscribed in an Isosceles Triangle a=20 length b=10 area = (Pi * b * b /4) * ((2*a -b)/ (2 *a +b)) result equal = 47.124
int ReadNumberPositive(string message){
    int nbr = 0 ;
    do
    {
    cout<<message<<endl ;
    cin>>nbr ;
    } while (nbr <0);
    return nbr ;
}

int main() {
   const float Pi = 3.14195 ;
float area = 0 , a =0,b =0;
a= ReadNumberPositive("Enter the length of Isosceles Triangle please ! ") ;
b = ReadNumberPositive("Enter the base of Isosceles Triangle please ! ") ;
area = (Pi * b*b /4) * ((2*a -b) /(2*a+b)) ;

cout<<"The result of Circle Area Inscribed in an Isosceles Triangle is \t"<<area<<endl ;
     cout<<"\n" ;
    return 0;
}
