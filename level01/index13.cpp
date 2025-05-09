#include <iostream>

using namespace std ;


int ReadNumberPositive(string message){
    int number = 0 ;
do
{
cout <<message <<endl ;
cin >> number ;
} while (number <0);

    return number ;
}
int main() {
   int a = 0 ,b=0 ,Area ;
   a = ReadNumberPositive("Enter number positive ") ;
   b = ReadNumberPositive("Enter number positive ") ;
   Area = a *  b ;
   cout<<"The result of Area of Rectangle  "<<Area <<endl ;
     cout<<"\n" ;
    return 0;
}
