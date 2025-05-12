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
float TotalMonthly (float loanAmount  ,float monthlyInstallment)
{
  return (float) loanAmount /  monthlyInstallment ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Loaon installment monthly                        ====\n"                              ;
   cout<<"======================================================================\n";
float loanAmount = ReadPositiveNumber("Plz Enter Loan Amount")  ;
float monthlyInstallment = ReadPositiveNumber("PLZ Enter monthly installment")  ;
cout<<endl ;
cout<<"\n Total month is Pay "<<TotalMonthly ( loanAmount  , monthlyInstallment) ;

     cout<<"\n" ;
    return 0;
}
