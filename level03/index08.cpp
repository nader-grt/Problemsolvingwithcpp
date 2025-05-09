#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


int ReadNumberPositive()
{
    int nbr = 0 ;

    do
    {
     cout<<"\n Enter your number "<<endl ;
     cin>>nbr ;
    } while (nbr <0);

    return nbr ;
    
}
float CalculateHalfeNumber(int number)
{
    return (float)  (number /2)  ;
}

void PrintResult(int number )
{
     string Result = "\n Half of number " + to_string(number) + " is " + to_string(CalculateHalfeNumber(number))  ;
     cout<<Result <<endl ; 
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
PrintResult(ReadNumberPositive())  ;

     cout<<"\n" ;
    return 0;
}
