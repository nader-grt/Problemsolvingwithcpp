#include <iostream>
#include <cmath>

using namespace std ;

//Problem of Circle Area Inscribed in a Square
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
   float const Pi =3.14159 ;
   int length = 0 ;
   float area = 0 ;
   length = ReadNumberPositive("Enter the length of square please ! ") ;
   area = (Pi * length * length)/4 ;

cout <<"The result of Circle Area Inscribed in a Square is \t"<<area <<endl ;
     cout<<"\n" ;
    return 0;
}
