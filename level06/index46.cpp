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

    return    ch ==  'a' || ch == 'e' || ch == 'i' ||  ch == 'o' ||  ch == 'u' ;
}
 

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;
  


           char ch  = MyLib::ReadOnceLetter("PLease Enter a character? ") ;

           if(IsVowel(ch))
           {
             printf("YES : The Letter ' %c '  is vowel \n", ch );
           }else
           {
            printf("NO : The Letter ' %c '  is NOT vowel \n", ch );
           }
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
