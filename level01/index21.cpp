#include <iostream>
#include <cmath>

using namespace std ;
// Problem of Circle Area circle Described Around an Arbitrary Triangle
//a,band c are length of triangle a=5 ,b=6 and c =7  the result is 40.088

int ReadNumberPositive(string message)
{
    int nbr = 0 ;
    do
    {
      cout<<message<<endl ;
      cin>>nbr ;
    } while (nbr<0);
    
    return nbr ;
}

int main() {
   const float Pi = 3.14195  ;
   float area =0 ,p =0 ,t=0 ;
   int a =0 ,b=0 ,c=0 ;
   a = ReadNumberPositive("Enter the length of rectangle number one please ! ") ;
   b = ReadNumberPositive("Enter the length of rectangle number second please ! ") ;
   c= ReadNumberPositive("Enter the length of rectangle number three please ! ") ;
  p = (a+b+c)/2 ;
  t= ((a*b*c) /(4 * (sqrt(p *(p-a) *(p-b) * (p-c)))) ) ;
  t= t*t ;
  area = Pi *t ;

cout<<"\n The result of Circle Area  Described Around an Arbitrary Triangle is\t"<<area<<endl ;

     cout<<"\n" ;
    return 0;
}
