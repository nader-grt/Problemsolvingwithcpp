#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;



float ReadDiameter()
{
    int Diameter ;
    cout<<" \n PLZ Enter the Diameter? "  <<endl  ;
    cin>>Diameter ;
    return Diameter ;

}

float  CalculateCircleAreaByDiameter(float Diameter)
{
    const float PI  =3.14159  ;
    float Area = ( pow(Diameter,2)  * PI) /4  ;
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


PrintResultArea(CalculateCircleAreaByDiameter(ReadDiameter()))  ;
     cout<<"\n" ;
    return 0;
}
