#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
void ReadRectangleData(int &A, int &B, int &C)
{
  cout <<" \n Enter the First length is A = " <<endl ;
  cin >> A ;

   cout <<" \n Enter the Second  length is B = " <<endl ;
  cin >> B ;
   cout <<" \n Enter the Threed length is C = " <<endl ;
  cin >> C ;
}

float CircleAreaCircleDescribedAroundArbitraryTriangle(int A, int B, int C)
{
        const float PI = 3.141592653 ;
        float P ;
        P = (A + B +C) /2 ;
      float T  = ((A * B * C ) /(4 * (sqrt(P( P-A ) * (P-B) * (P -C))))  )   ;
   //   T = pow(T,2)  ;
      float Area  =  PI  * pow(T,2) ;
      return Area  ;


}


void PrintResult(float Area)
{
  cout <<"\n Circle Area Circle Described Around Arbitrary Triangle "<<Area <<endl ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===             CircleAreaCircleDescribedAroundArbitraryTriangle              ====\n"                              ;
   cout<<"======================================================================\n";
int A ,B ,C :

 ReadRectangleData(A, B, C)  ;


PrintResult( CircleAreaCircleDescribedAroundArbitraryTriangle  (A ,B ,C ))

     cout<<"\n" ;
    return 0;
}
