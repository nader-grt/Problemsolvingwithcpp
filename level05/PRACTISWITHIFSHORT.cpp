#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function

#include "LibraryOrPackage/MyLib.h" ;
using namespace std ;


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                SHORT HAND IF using c++  languages             ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

   int number = MyLib::ReadNumber("\n Enter anumber? ")  ;
 //  string result ;
// (number >0) ?  cout<< to_string(number)  + " is Positive \n" : cout<< " is Negative \n"  ;


 (number == 0) ?  cout<< to_string(number)  + " is Zero  \n" :  (number >0) ?  cout<< to_string(number)  + " is Positive \n" : cout<< to_string(number) + " is Negative \n"  ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
