#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;






void ReadNumbers(int &A,int &D)
{
      cout <<" \n Enter Your number 1 : "<<endl ;
  cin>>A  ;
    cout <<" \n Enter Your number 2 : "<<endl ;
  cin>>D  ;

}

float  RectangleAreaBySideAndDiagonal(int A,int D)
{
    float Area  = A * sqrt(pow(D,2) - pow(A,2))  ;
  return Area   ;
}

void PrintResultArea(float Area)
{
  cout<<"\n Your Area is " + to_string(Area)  <<endl ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

int A, D ;

ReadNumbers(A,D)  ;
PrintResultArea(RectangleAreaBySideAndDiagonal(A,D))  ;
     cout<<"\n" ;
    return 0;
}