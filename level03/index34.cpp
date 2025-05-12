#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


int ReadNumber()
{
    int Number =0 ;
    do
    {
       cout<<"\n Enter Number ? "<<endl ;
       cin>>Number ;
    } while (Number <0);
    return Number ;
    
}
int ReadPower()
{
    int p =0 ;
    cout<<"\n Enter the power ? " <<endl ;
    cin>>p ;
    if (p == 0)
    {
       return 1 ;
    }else
 
    return p ;
     
}

int CaculePowerNumber(int Number ,int power)
{
    int NumberPower =1 ,count =0;
    do
    {
      count++ ;
      NumberPower *= Number ;
    } while (count < power);
    return NumberPower ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
  cout<<CaculePowerNumber(ReadNumber() ,ReadPower())  ;

     cout<<"\n" ;
    return 0;
}
