#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


int ReadNumberPostive(string message)
{
  int Number =0 ;
  do
  {
   cout<<message<<endl ;
   cin>>Number ;
  } while (Number<0);
  
  return Number ;
}

int SumDigit(int Number)
{
  int Sum = 0 ,Remainder =0;
   do
   {
    Remainder = Number % 10 ;
    Number  = Number / 10 ;
    Sum += Remainder  ;
  
   } while (Number > 0);
   

  return Sum ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Sum Digit Numbers                               ====\n"                              ;
   cout<<"======================================================================\n";
    int Number = ReadNumberPostive("Enter a positive Number? ")  ;
    cout<<" Sum of Digit number "<<to_string(Number) + " is " <<SumDigit(Number )  ;

     cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
    return 0;
}
