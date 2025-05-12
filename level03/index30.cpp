#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

enum enOddOrEven {Even = 1 ,Odd=2} ;



void ReadNumber() 
{
    int Number  =0 ;
    do
    {
       cout<<"\n Enter Your Number? "<<endl ;
       cin>>Number ;
    } while (Number <0);
    return Number ;
    
}

enOddOrEven  CheckNumberEvenOrOdd(int Number)
{
    if(Number % 2 == 0)
    return   enOddOrEven::Even  ;
    else 
     return   enOddOrEven::Odd  ;
}


int SumOddNumbersFrom1toN_usingFor(int Number)
{
    int Sum = 0 ;
    for (int Count = 0; i < Number; Count++)
    {
      if(CheckNumberEvenOrOdd(Number)  == enOddOrEven::Odd )
      Sum +=Count ;
    }
    
    return Sum ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";


   int N = ReadNumber()  ;
    cout<<SumOddNumbersFrom1toN_usingFor(N)  <<endl ;
    
     cout<<"\n" ;
    return 0;
}
