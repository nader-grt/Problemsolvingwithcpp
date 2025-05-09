#include <iostream>
#include <cmath>

using namespace std ;
//The area of triangle is base and height  area = 0.5 b * h  10 and 8 equal 40
int ReadPositiveNumber(string message)
{
    int nbr = 0 ;
    do
    {
        cout<<message <<endl ;
        cin>>nbr ;
    } while (nbr<0);
    return nbr ;
}
int main() {
  int base =0 , height =0 ;
  float area = 0;
  base = ReadPositiveNumber("Enter the base of rectangle please ! ");cout <<endl ;
  height = ReadPositiveNumber("Enter the height of triangle please ! ") ;cout <<"\n";
  area = 0.5 * base * height ;
cout <<"\n The result of area of triangle is \t"<<area <<endl ;
     cout<<"\n" ;
    return 0;
}
