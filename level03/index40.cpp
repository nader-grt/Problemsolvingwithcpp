#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
enum enPrimNotPrime { Prime =1 ,NotPrime=2}  ;

int ReadNumberPositive(string message)
{
  int Number =0 ;
  do
  {
    cout<<message<<endl ;
    cin>>Number ;
  } while (Number <0);
  return Number ;
  
}
enPrimNotPrime  CheckNumberIsPrime(int Number)
{

  int M = round(Number / 2)  ;
  for (int  Count = 2; Count <=M; Count++)
  {
    if(Number % Count == 0)
    return enPrimNotPrime::NotPrime ;
  }

  return enPrimNotPrime::Prime ;
  
}

void PrintNumberType(int Number )
{
     switch (CheckNumberIsPrime(Number))
     {
     case enPrimNotPrime::Prime  :
      cout<<" The number is Prime"<<endl ;
      break;
          case enPrimNotPrime::NotPrime  :
      cout<<" The number is Not Prime"<<endl ;
      break;
     
     default:
      break;
     }

}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

PrintNumberType(ReadNumberPositive("Enter the Number? PLZ"))  ;
     cout<<"\n" ;
    return 0;
}
