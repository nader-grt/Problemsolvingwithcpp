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

bool IsVowel(char ch)
{
    ch = tolower(ch)   ;

    return    ch == 'a' || ch == 'e' || ch == 'i' ||  ch == 'o' || ch == 'u'   ;
}


 short countVowel(string s)
 {
      short count = 0 ;
                 
                 for(short i = 0 ; i < s.length();i++)
                 {

                      if(IsVowel(s[i]))
                      {
                        count++ ;
                      }
                 }
                  

                return count ;
 }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



         string s1 = MyLib::ReadString("Please Enter your string? ")  ;




          printf("\n Number of Vowels is %d" ,countVowel(s1))  ;










   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
