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

char IsInvertedOnceLetter(char ch)
{
    return isupper(ch) ? tolower(ch) : toupper(ch) ;
}

short CountLetterCapital(string s,short count ,char ch)
{
                short countCapitalLetter = 0 ;

                    for (short i = 0; i < s.length(); i++)
               {
                if(s[i] ==  IsInvertedOnceLetter(ch))
                {
                    countCapitalLetter++  ;
                }
               }
         return ( countCapitalLetter   + count)  ;
}

short CountLetterMatchCase(string s ,char ch)
{
    short count = 0 ;
               for (short i = 0; i < s.length(); i++)
               {
                if(s[i] == ch)
                {
                    count++ ;
                }
               }
               

    return  count ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;






              string s1 = MyLib::ReadString("Please Enter Your String? ") ;
              char ch  = MyLib::ReadOnceLetter("Please Enter a character? ") ;

char ch1 = toupper(ch) ;



 printf("The Letter ' %c ' Count = %d\n", ch ,CountLetterMatchCase(s1,ch));
short count = CountLetterMatchCase(s1,ch)  ;

 printf("The Letter ' %c '  OR  ' %c ' Count = %d\n", ch ,ch1,CountLetterCapital (s1, count ,ch));





   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
