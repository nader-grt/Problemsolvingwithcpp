#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

float ReadRadious()
{
    int Rad ;
    cout<<" \n PLZ Enter the Radious ? "  <<endl  ;
    cin>>Rad
    return Rad ;

}

float  CalculateCircleArea(float Rad)
{
    const float PI  =3.14159  ;
    float Area = pow(Rad,2)  * PI ;
    return Area ;
}

void PrintResultArea(float Area)
{
  cout<<"\n Your Cirle Area is " + to_string(Area)  <<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

PrintResultArea(CalculateCircleArea( ReadRadious())   )  ;
     cout<<"\n" ;
    return 0;
}
