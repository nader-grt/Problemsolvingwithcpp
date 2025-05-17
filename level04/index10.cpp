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

int GetDigitOposite(int Number)
{
    int Remainder = 0 ,Result = 0 ;
     
     do
     {
        Remainder = Number % 10  ;
        Number /= 10 ;
        Result  = Result * 10  + Remainder  ;
     } while (Number > 0);
     
    return Result ;
}
void ReversedDigit(int Number)
{
     int Remainder = 0 ;
     do
     {
          Remainder = Number % 10  ;
        Number /= 10 ;
        cout<<Remainder <<endl ;
     } while (Number > 0);
     
}

//  or Solution 

int ReverseNumber(int Number)
{
    int Remainder = 0;  // Variable to store the last digit extracted from the number.
    int Number2 = 0;    // Variable to accumulate the reversed number.
    
    // Process each digit until the original number becomes 0.
    while (Number > 0)
    {
        Remainder = Number % 10;          // Extract the last digit from Number.
        Number = Number / 10;             // Remove the last digit from Number.
        Number2 = Number2 * 10 + Remainder; // Append the extracted digit to Number2.
    }
    
    return Number2;  // Return the reversed number.
}

// Function: PrintDigits
// Purpose: Prints each digit of the given number on a new line.
//          It extracts the digits using the modulo operator and division.
// Parameter: Number - the positive integer whose digits will be printed.
void PrintDigits(int Number)
{
    int Remainder = 0;  // Variable to store the digit extracted from the number.
    
    // Continue processing until there are no digits left in Number.
    while (Number > 0)
    {
        Remainder = Number % 10;  // Extract the last digit.
        Number = Number / 10;     // Remove the last digit.
        cout << Remainder << endl; // Print the extracted digit on a new line.
    }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

int Number = ReadNumberPositive("Enter a positive Number? ")  ;
int ReversedNumber = GetDigitOposite(Number)  ;


cout<<" \n \n The Reversed Number of " << Number  << " is \n"<<endl ; 
ReversedDigit(ReversedNumber) ;

  cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n" ;
     cout<<"\n" ;

// PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter a positive number?")));

     cout<<"\n" ;
    return 0;
}
