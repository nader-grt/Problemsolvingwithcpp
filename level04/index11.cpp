#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

int ReadNumberPositive(string message)
{
    int Number =0 ;
    do
    {
      cout<<message<<endl ;
      cin>>Number ;
    } while (Number <0);
    
    return Number  ;
}


int ReversedDigit(int Number)
{
    int Result = 0 ,Remainder = 0 ;
     
     do
     {
        Remainder = Number % 10 ;
        Number  /=  10 ;
        Result = Result  *10  + Remainder ;
     } while (Number > 0);
     
    return Result  ;

}

bool IsPalindromNumber(int Number)
{
    return  Number  == ReversedDigit(Number)  ;
}


void PrintPalindromNumber(int Number)
{
    if(  IsPalindromNumber(Number) )
    cout<<"\n "<<Number << " is Palindrom "<<endl ;
    else
     cout<<"\n "<<Number << " is Not Palindrom "<<endl ;

}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Palindrom Number             ====\n"                              ;
   cout<<"======================================================================\n";



PrintPalindromNumber(ReadNumberPositive("Enter a Number PLZ? "))  ;













 cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n" ;
     cout<<"\n" ;
      cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n" ;
     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
