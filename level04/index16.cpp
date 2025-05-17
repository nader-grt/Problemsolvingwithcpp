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

void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";  // Print an empty line for formatting.
  
    // Outer loop: 'i' represents the ASCII code for the current letter.
    // It starts at (65 + Number - 1) which is the highest letter to be printed,
    // and decrements down to 65 ('A').
    for (int i = 65 ; i <=  i + Number - 1; i++)
    {
        // Calculate the number of times to print the current letter.
        // When i = 65 + Number - 1, (65 + Number - 1 - i) equals 0,
        // so the inner loop runs 'Number' times.
        // For each subsequent row, this value increases, reducing the count by 1 each time.
     
        for (int j = 1; j <=  i - 65  + 1; j++)
        {
            cout << char(i);  // Print the current letter (converted from its ASCII code).
        }
      
        cout << "\n";  // After printing the current row, move to the next line.
    }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";


                    PrintInvertedLetterPattern( ReadNumberPostive("Enter number?")) ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
