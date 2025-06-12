#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */

bool isPunctuation(char ch) {

              string punct = R"(!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~)";
    return punct.find(ch) !=  string::npos;
}
 string RemovePunctuationFromString(string s1)
 {
     string s2 = "" ;

     for (short i = 0; i < s1.length(); i++)
     {
         if(!isPunctuation(s1[i]))
         {
          s2 +=  s1[i] ;
         }
     }

     return s2 ;
     

 }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

string S1 = "Welcome ####to Jordan, Jordan is a nice country; it's amazing.";
cout << "Original String:\n" << S1;
cout << "\n\nPauncuations Removed:\n" <<RemovePunctuationFromString(S1);


















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
