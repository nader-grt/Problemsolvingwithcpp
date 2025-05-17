#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


enum enPrimeNotPrime {Prime =1 , NotPrime} ;


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

enPrimeNotPrime CheckPrimeNumber(int Number)
{
            int M = round(Number / 2)  ;
            for (int  Count = 2; Count <=M; Count++)
            {
              if(Number % Count ==0)
              return enPrimeNotPrime::NotPrime  ;
            }
            


  return enPrimeNotPrime::Prime ;
}


void PrintAllNumbersPrime(int Number)
{
   cout << "\n"; 
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;
  for (int i = 1; i <=Number; i++)
  {
    if(CheckPrimeNumber(i)  == enPrimeNotPrime::Prime  )
    cout<<i <<"  " ;
  }
  
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Print All Number Prime From 1 To N             ====\n"                              ;
   cout<<"======================================================================\n";

PrintAllNumbersPrime(ReadNumberPositive("Enter the Number? "))  ;



     cout<<"\n \n \n \n \n \n \n \n \n " ;
    return 0;
}
