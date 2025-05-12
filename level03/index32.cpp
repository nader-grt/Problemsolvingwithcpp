#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


int ReadPositiveNumber(string message)
{
    int N =0 ;
    do
    {
      cout<<message <<endl ;
      cin>>N ;
    } while (N<0);
    return N ;
    
}

int Factorial(int N)
{
    int Fac =1 ;
    for (int  count  = N; count >=1 ; count--)
    {
          Fac = Fac * count ;
    }
    return Fac ;
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Factorial Number                                ====\n" ;
   cout<<"======================================================================\n";
   int N = ReadPositiveNumber("Enter N ? ")  ;
cout<<"The facorial of Number " + to_string(N) + " is " +  to_string(Factorial(N) )  <<endl  ;

     cout<<"\n" ;
    return 0;
}
