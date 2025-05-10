#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


void ReadNumbers(int &A,int &B)
{
      cout <<" \n Enter Your number 1 : "<<endl ;
  cin>>A  ;
    cout <<" \n Enter Your number 2 : "<<endl ;
  cin>>B  ;

}

float  CalculateRectangleArea(int A,int B)
{
  return A * B ;
}

void PrintResultArea(float Area)
{
  cout<<"\n Your Area is " + to_string(Area)  <<endl ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

int A, B ;

ReadNumbers(A,B)  ;
PrintResultArea(CalculateRectangleArea(A,B))  ;
     cout<<"\n" ;
    return 0;
}
