#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

float ReadPositiveNumber(string message)
{
    int Number = 0  ;
    do
    {
       cout<<message<<endl ;
       cin>>Number ;
    } while (Number <0);
    
    return Number ;
}

float CalculateRemainder(int TotalPaid ,int TotalCashPaid)
{
    return     TotalCashPaid - TotalPaid; 
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
int    TotalCashPaid = ReadPositiveNumber("")  ;
int  TotalPaid    = ReadPositiveNumber("")  ; 

     cout<<"\n" ;
    return 0;
}
