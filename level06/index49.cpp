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
// Mohammed Abu-Hadhoud @ProgrammingAdvices

/*

s2.empty()
Returns true → if the string is empty (has no characters)

Returns false → if the string has at least one character*/

void  PrintEachWord(string s )
{
    string s2 = "" ;
  //  bool IsExistSpace = true ;
    for (short i = 0; i < s.length(); i++)
    {
       if(s[i] != ' '  )
       {
        s2 += s[i] ;
       }
           // IsExistSpace =  (s[i] == ' ') ;
       if( s[i] == ' ')
       {
        cout<<"\n" <<s2 ;
         s2 = "";
       }
    }

       if( !s2.empty())
       {
        cout<<"\n" <<s2 ;
         
       }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




          string s1  = MyLib::ReadString("Please Enter Your String ? ")  ;



cout <<"\n Your string word are \n" ;
PrintEachWord(s1) ;









   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
