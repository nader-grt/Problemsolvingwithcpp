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

short counletter(string s,char ch , bool MatchCase = true)
{
                  int count = 0 ;

                  for (short  i = 0; i < s.length(); i++)
                  {
                      if(MatchCase)
                      {
                             if(s[i] == ch)
                             {
                                count++ ;
                             }

                      }else
                      {

                          if( tolower(s[i])  == tolower(ch) )
                          {
                            count++ ;
                          }

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


       




            string s1  = MyLib::ReadString("Please Enter your String? ") ;
            char ch  = MyLib::ReadOnceLetter("PLease Enter a character? ") ;

        //    char ch2 = MyLib::IsInvertedOnceLetter(ch) ;




 printf("The Letter ' %c ' Count = %d\n", ch ,counletter(s1,ch));


 printf("The Letter ' %c '  OR  ' %c ' Count = %d\n", ch ,  MyLib::IsInvertedOnceLetter(ch)  ,counletter (s1,ch,false));






   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
