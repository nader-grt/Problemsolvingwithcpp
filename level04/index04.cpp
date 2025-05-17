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
    if(Number % i  == 0)
    Sum += i  ;
  }
  return Sum == Number ;
}


void PrintPerfectNumbersFrom1ToN(int Number)
{
  
  cout<<endl ;
  cout<<"All Number  Perfect From 1 To "+to_string(Number) ;
  cout<<"\n are: ";
  for (int  i = 1; i <=Number; i++)
  {
    if(IsPerfectNumber(i))
    cout<<i<<"  ";
  }
  
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Perfect Numbers From 1 TO N                      ====\n"                              ;
   cout<<"======================================================================\n";
PrintPerfectNumbersFrom1ToN(ReadNumberPostive("Enter Number PLZ? "))  ;

     cout<<"\n \n \n \n \n \n \n \n \n \n " ;
    return 0;
}
