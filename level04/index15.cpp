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

void PrintLetterPattern(int Number)
{
     cout<<"\n"  ;
    for (int i = (65 + (Number -1)) ; i >= 65; i--)
    {
        for (int j = 65; j <=i ; j++)
        {
          cout<<char(i)  ;
        }
        cout<<"\n"  ;
    }
    
}

void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";  // Print an empty line for formatting.
  
    // Outer loop: 'i' represents the ASCII code for the current letter.
    // It starts at (65 + Number - 1) which is the highest letter to be printed,
    // and decrements down to 65 ('A').
    for (int i = 65 + Number - 1; i >= 65; i--)
    {
        // Calculate the number of times to print the current letter.
        // When i = 65 + Number - 1, (65 + Number - 1 - i) equals 0,
        // so the inner loop runs 'Number' times.
        // For each subsequent row, this value increases, reducing the count by 1 each time.
        for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
        {
            cout << char(i);  // Print the current letter (converted from its ASCII code).
        }
      
        cout << "\n";  // After printing the current row, move to the next line.
    }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Inverted Letter Pattern              ====\n"                              ;
   cout<<"======================================================================\n";

PrintLetterPattern(ReadNumberPostive("Enter a Number?"))  ;


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
