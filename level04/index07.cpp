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


int ReversedDigit(int Number)
{
    int   Remainder =0  ;
    string ReversedDigit = ""  ;
    do
    {
        Remainder = Number % 10 ;
        Number =  Number /10  ;
        ReversedDigit +=  to_string(Remainder)  ;
        
    } while (Number > 0);
    return stoi(ReversedDigit)  ;
}


int ReverseNumber(int Number)
{
    int Remainder = 0;  // Variable to store the last digit extracted from the number.
    int Number2 = 0;    // Variable to accumulate the reversed number.
    
    // Loop until there are no more digits left in Number.
    while (Number > 0)
    {
        Remainder = Number % 10;   // Extract the last digit of Number.
        Number = Number / 10;      // Remove the last digit from Number.
        Number2 = Number2 * 10 + Remainder;  // Append the digit to Number2 by shifting left and adding Remainder.
    }
    
    return Number2;  // Return the reversed number.
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Reversed Number                                ====\n"      ;
   cout<<"======================================================================\n";
int  Number = ReadNumberPostive("Enter the Number you want reversed? ")  ;
cout<<"The Reversed Number of " + to_string(Number)  + " is "<<ReversedDigit(Number)  ;



  cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n" ;
     cout<<"\n" ;
    return 0;
}
