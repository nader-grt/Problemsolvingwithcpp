


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


bool  isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
// char  c = tolower(ch)  ;
//    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//      return true ;

}
   string ChangeEachvowelTo__Start(string S1)
   {
        for (short i = 0; i < S1.length(); i++)
        {
              if(isVowel(S1[i])) S1[i] = '*' ;
             
        }
        


    return S1 ;
   }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++    Change vowels to '*' languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

   string word = "education";

   cout<<"Before chang"  <<word<<endl ;

   cout<<"After changing is "<<  ChangeEachvowelTo__Start(word )  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
