#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;






void ReadNumbers(int &A,int &H)
{
      cout <<" \n Enter Your number 1 : "<<endl ;
  cin>>A  ;
    cout <<" \n Enter Your number 2 : "<<endl ;
  cin>>H  ;

}

float  TriangleArea(int A,int H)
{
    float Area  = (A/2 ) * H ;
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
PrintResultArea(TriangleArea(A,D))  ;
     cout<<"\n" ;
    return 0;
}