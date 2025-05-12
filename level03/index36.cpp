#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;



int ReadTotalSales()
{
    int TotalSales =0;
   cout<<"\n Enter Total sales "<<endl ;
   cin>> TotalSales ;
   return TotalSales ; 
}

float GetCommissionPercentage(int TotalSales)
{

    if(TotalSales > 100000000)
    return 0.01 ;
    else if (TotalSales >= 1000000)
    return 0.02 ;
     else if (TotalSales >= 500000)
      return   0.03 ;
       else if (TotalSales >= 20000)
       return 0.04 ;
        else if (TotalSales >= 12000)
        return 0.05 ;
        else
        return 0.00 ;
}

float CalculateCommistionSalesTotal( float TotalSales)
{
    return GetCommissionPercentage( TotalSales) * TotalSales ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

int TotalSales  = ReadTotalSales()  ;
cout<<CalculateCommistionSalesTotal(TotalSales)  <<endl ;
     cout<<"\n" ;
    return 0;
}
