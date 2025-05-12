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

float TotalBillAfterServiceFeeAndTax(float TotalBill)
{
      TotalBill = TotalBill 1.1 ;
      TotalBill = TotalBill *1.16  ;
      return   TotalBill  ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

         float TotalBill = ReadPositiveNumber("")    ;
         cout<<endl ;
         cout<<" Total Bill is "<<TotalBill <<endl ;
         cout <<"\n Total Bill After Servçice Fee and Tax of Sales "<<TotalBillAfterServiceFeeAndTax(TotalBill) <<endl ;

         
     cout<<"\n" ;
    return 0;
}
