#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;



float ReadLengethSquare()
{
    int LengthSquare ;
    cout<<" \n PLZ Enter the LengthSquare? "  <<endl  ;
    cin>>LengthSquare ;
    return LengthSquare ;

}

float  CalculateCircleAreaInsideSquare(float LengthSquare)
{
    const float PI  =3.14159  ;
    float Area = ( pow(LengthSquare,2)  * PI) /4  ;
    return Area ;
}

void PrintResultArea(float Area)
{
  cout<<"\n Your Cirle Area By Diameteris " + to_string(Area)  <<endl ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";


PrintResultArea(CalculateCircleAreaInsideSquare(ReadLengethSquare()))  ;
     cout<<"\n" ;
    return 0;
}
