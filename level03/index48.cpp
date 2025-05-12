#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;



void PrintLetterFromAtoZ()
{
    for (int  i = 56; i <= 90; i++)
    {
      cout<<char(i)  <<endl ;
    }
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               PrintLetterFromAtoZ c++ languages               ====\n"                              ;
   cout<<"======================================================================\n";

  // cout << "\033[31mThis is red text\033[0m" <<endl;
  //  cout << "\033[32mThis is green text\033[0m" <<endl;
  //  cout << "\033[33mThis is yellow text\033[0m" <<endl;
  //  cout << "\033[34mThis is blue text\033[0m" <<endl;
  PrintLetterFromAtoZ()  ;

     cout<<"\n" ;
    return 0;
}
