#include <iostream>
#include <cmath>
using namespace std ;
//PROBLEM OF ARE OF CIRLE area = Pi *r*r  radius as r
int ReadPôsitiveNumber(string message)
{
    int nbr = 0 ;
  do
  {
    cout<<message<<endl ;
    cin>>nbr ;
  } while (nbr <0);
  
    return nbr ;
}
int main() {
 float const Pi =3.14 ;
 float area = 0 ;
 int radius = 0 ;
 radius =ReadPôsitiveNumber("Enter the radius of circle please ! ") ;
   area =Pi * radius * radius ;
cout<<"\n The result of circle using radius as r is \t"<<area <<endl ;

     cout<<"\n" ;
    return 0;
}
