#include <iostream>
#include <cmath>
using namespace std ;

// Problem Commission Percentage
//100000 percentage is 1% then  1000 to 5000 percentage 2%
//100 to 500 percentage 3%
// from 50 to 100 percentage 5%
//otherwise percentage is 0% 

int ReadTotalSales(string message)
{
       long int nbr = 0 ;
       do
       {
        cout<<message<<endl ;
        cin>>nbr ;
       } while (nbr <0);
       
    return nbr ;
}

void PrintTotalCommission(long int totalSales)
{
    float percentage = 0 ,totalComission = 0;
        if(totalSales >100000 )
    {
       percentage = 0.01 ;
    }else if(totalSales >1000 && totalSales <5000)
    {
     percentage = 0.02 ;
    }else if(totalSales >100 && totalSales <500)
    {
     percentage = 0.03 ;
    }else if(totalSales >60 && totalSales <69)
    {
     percentage = 0.05 ;
    }else if(totalSales >50 && totalSales <100)
    {
       percentage = 0.05 ;
    }else
    {
        percentage = 0 ;
    }
totalComission = percentage * totalSales ;

  cout<< "\n The result of total Commission of Sales is \t "<<totalComission<<endl ;
}

int main() {
   
int totalSales = ReadTotalSales("Enter total Sales \t is ") ;
      PrintTotalCommission(totalSales)              ;
     cout<<"\n" ;
    return 0;
}
