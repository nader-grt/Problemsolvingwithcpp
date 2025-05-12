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

float MonthlyInstallment(float LoanAmount ,   float HowManyMonth )
{
  return (float)  LoanAmount / HowManyMonth ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Monthly loan installment                        ====\n"                              ;
   cout<<"======================================================================\n";

   float LoanAmount = ReadPositiveNumber("PLZ Enter Loan Amount? ")  ;
   float HowManyMonth  = ReadPositiveNumber("How Many Month? ")  ;
cout<<endl ;
cout<<"Monthly Installment is "<<MonthlyInstallment(LoanAmount ,    HowManyMonth) ;
     cout<<"\n \n \n \n \n \n " ;
    return 0;
}
