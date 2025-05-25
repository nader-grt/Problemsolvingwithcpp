#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;








char x ;
char w ;
x = toupper('a');
w = tolower('A');
cout << "converting a to A: " << x << endl;
cout << "converting A to a: " << w << endl;
// Digits (A to Z)
// returns zero if not, and non zero of yes
cout << "isupper('A') " << isupper( 'A') << endl;
// lower case (a to z)
// returns zero if not, and non zero of yes
cout << "islower('A') " << islower('A') << endl;
// Digits (0 to 9)
// returns zero if not, and non zero of yes
cout << "isdigit('A') " << isdigit ('A') << endl;
// punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
// returns zero if not, and non zero of yes
cout << "ispunct('A') " << ispunct('A') << endl;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
