#include <iostream>
#include <cmath>

using namespace std ;

//Problem of Circle Area Through Diameter as d = 10   result 78.54 pi = 3.14159

int ReadNumberPositive(string message){
    int nbr = 0 ;
   do
   {
     cout<<message<<endl ;
     cin>>nbr ;
   } while (nbr < 0);
   
    return nbr ;
}
int main() {
   float const Pi = 3.14159;
   float area = 0 , diameter = 0 ;

diameter = ReadNumberPositive("Enter the diameter of circle please ! ") ;
area = (Pi * diameter * diameter /4) ;
cout<<"The result of of Circle Area Through Diameter is\t"<<area <<endl ;
     cout<<"\n" ;
    return 0;
}
