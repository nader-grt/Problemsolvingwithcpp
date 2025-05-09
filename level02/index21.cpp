#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

void PrintCommisionPercentageSales(int &nbrSales)
{
  if(nbrSales >= 100 &&  nbrSales <= 500)
   {
     cout <<"you are take 1% of sales \n" ;
   }else if(nbrSales >= 501 &&  nbrSales <= 1000)
   {
     cout <<"you are take 2% of sales \n" ;
   }else if(nbrSales >= 1001 &&  nbrSales <= 2000)
   {
     cout <<"you are take 3% of sales \n" ;
   }else if(nbrSales >= 2001 &&  nbrSales <= 3000)
   {
     cout <<"you are take 4% of sales \n" ;
   }else if(nbrSales >= 3001 &&  nbrSales <= 5000)
   {
     cout <<"you are take 5% of sales \n" ;
   }
   else 
   {
     cout <<"you are take 0% of sales \n" ;
   }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===   Training Commision percentenges of sales  c++ languages     ====\n"                              ;
   cout<<"======================================================================\n";

   int   nbrSales  ;
  cout<<"Enter the number of slaes of monthly please "<<endl ;
cin>>nbrSales  ;
PrintCommisionPercentageSales(nbrSales)  ;
     cout<<"\n" ;
    return 0;
}
