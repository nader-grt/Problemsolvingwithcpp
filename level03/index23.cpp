#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


/*

Rule 
   Area = PI * ((B *B)  /4 ) * (((2 * (A - B)) / ((2 * (A + B)) )  )
*/
void ReadTriangleData(int &A, int &B)
{
    cout<<"\n  Enter the first length of triangle "  <<endl ;
     cin >> A ;
      cout<<"\n  Enter the second  length of triangle "  <<endl ;
     cin >> B ;

    }

    float CalculateCircleAreaInsideTriangle(int A ,int B)
    {
        const float PI = 3.141592653 ;
         float     Area = PI * ((B *B)  /4 ) * (((2 * (A - B)) / ((2 * (A + B)) )  )  ;
         return Area ;
    }


void PrintResult(float Area)
{

}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===             Problem circle area inside triangle isosciel             ====\n"                              ;
   cout<<"======================================================================\n";
int A ,  B ;
ReadTriangleData(A,B)  ;
   cout<<"\n" ;
      cout<<"\n" ;

PrintResult(  CalculateCircleAreaInsideTriangle (A,B)) ;
     cout<<"\n \n \n \n<<" ;
    return 0;
}
