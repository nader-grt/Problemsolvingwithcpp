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
       ch = tolower(ch) ;
    return  ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'  ;
}

void PrintAllVowelsInString(string s1)
{

     cout<<" Vowels In String are : " ;
    for (short i = 0; i < s1.length(); i++)
    {
       if(IsVowel(s1[i]) )
       {
        cout <<s1[i] <<"  " ;
       }
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Print All vowels in string using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

      string s1 = MyLib::ReadString("Please Enter your String? ")  ;


PrintAllVowelsInString(s1)  ;
 













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
