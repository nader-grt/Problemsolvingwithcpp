#include <iostream>
#include <cmath>

using namespace std ;

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
  int diagonal=0 ,length=0 ;
  float area=0 ;
  diagonal = ReadNumberPositive("Enter the diagonal of rectangle ") ;
  length = ReadNumberPositive("Enter the length of rectangle ") ;
    
area = length * sqrt(diagonal * diagonal - length * length) ;
cout<<"\n The result of rectangle using diagonal is \t"<<area<<endl ;
    
    cout<<"\n" ;

    return 0;
}
