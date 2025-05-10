#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;



float ReadCircumference()
{
    int LengthCircumference ;
    cout<<" \n PLZ Enter the LengthCircumference? "  <<endl  ;
    cin>>LengthCircumference ;
    return LengthCircumference ;

}

float  CalculateCircleAreaCircumference(float LengthCircumference)
{
    const float PI  =3.14159  ;
    float Area = ( pow(LengthCircumference,2)) /(4 * PI) ;
    return Area ;
}

void PrintResultArea(float Area)
{
  cout<<"\n Your Cirle Area By Circumference " + to_string(Area)  <<endl ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";


PrintResultArea(CalculateCircleAreaCircumference(ReadCircumference()))  ;
     cout<<"\n" ;
    return 0;
}
