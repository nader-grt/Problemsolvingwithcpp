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

void PrintReversedOrderDigit(int Number)
{
  cout<<"Reversed Digit Number \n ";
  cout<<" are :"<<endl ;
  string RevesedDigit = to_string(Number)  ;
  for (int i = RevesedDigit.length() - 1 ; i >=0 ; i--)
  {
    cout<<RevesedDigit[i] <<endl ;
  }
  
}

// or use this solution 
void PrintDigits(int Number)
{
    int Sum = 0, Remainder = 0; // Initialize variables. Although 'Sum' is declared, it is not used in this function.
    
    // Continue looping while there are digits left in Number.
    while (Number > 0)
    {
        Remainder = Number % 10; // Extract the last digit of Number.
        Number = Number / 10;    // Remove the last digit from Number.
        cout << Remainder << endl;  // Print the extracted digit on a new line.
    }
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Reversed Order OfNumber digit             ====\n"                              ;
   cout<<"======================================================================\n";

PrintReversedOrderDigit(ReadNumberPostive("Enter number? ")) ;
       cout<<"\n \n \n \n \n \n \n \n \n \n " ;

       PrintDigits(ReadNumberPostive("Enter Number? other solution "))  ;
 cout<<"\n \n \n \n \n \n \n \n \n \n " ;


    return 0;
}
