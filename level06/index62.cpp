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
string ReplaceWordInString(string s)
{
    string sword = "Jordan";
    short pos = s.find(sword);

   while (pos != string::npos)
    {
        s.replace(pos, sword.length(), "USA");
        pos = s.find(sword);
    }

    return s;
}

   string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
   {
                short pos = S1.find(StringToReplace);
                
            while (pos != std::string::npos)
            {

                S1 = S1.replace(pos, StringToReplace.length(),

                sRepalceTo);

                pos = S1.find(StringToReplace);//find next

            }

            return S1;
    }


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



           string s1 = MyLib::ReadString("Please Enter Your String? ") ;

cout<<ReplaceWordInString(s1) ;





// string S1 = "Welcome to Jordan , Jordan is a nice country";
// string StringToReplace = "Jordan";
// string ReplaceTo = "USA";
// cout << "\nOrigial String\n" << S1;
// cout << "\n\nString After Replace:" ;
// cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(S1,
// StringToReplace, ReplaceTo);











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
