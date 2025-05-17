#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

float ReadNumberPostive(string message)
{
  int Number =0 ;
  do
  {
   cout<<message<<endl ;
   cin>>Number ;
  } while (Number<0);
  
  return Number ;
}


bool IsPerfectNumber(int Number)
{
  int Sum = 0 ;
  for (int i = 1; i < Number; i++)
  {
    if(Number % i  ==0)
    Sum += i  ;
  }
  return Sum == Number ;
}

void PrintPerfectNumber(int Number)
{
  if(IsPerfectNumber(Number))
  cout<<to_string(Number) + " is perfect Number "<<endl ;
  else
  cout<<to_string(Number) + " is Not perfect Number "<<endl ;

}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===PERFECT NUMBER IF ALL DIVISEURS =SUM OFTHIS NUMBER WITHOUT ITIS====\n"                              ;
   cout<<"======================================================================\n";


PrintPerfectNumber(ReadNumberPostive("Enter Number? "))   ;


     cout<<"\n \n \n \n \n \n \n \n \n" ;
    return 0;
}
