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


vector <string> SplitFunction(string s1, string seperator)
{
      vector <string> vString ;
    short pos = 0 ;
    string sword = "" ;

    while ((pos = s1.find(seperator))) 
    {
         sword = s1.substr(0,pos) ;
         if(sword != " ")
         {
          vString.push_back(sword) ;
         }
         s1.erase(0,pos + seperator.length())  ;
    }
      if(s1 != " ")
         {
          vString.push_back(s1) ;
         }


      return vString ;
}

string LowerAllString(string word)
{
 
   for (short i = 0; i < word.length(); i++)
   {
      tolower(word[i]) ;
   }
   return word ;
}

string JoinString(vector <string> s1,string seperator)
{
            string s2 = "" ;
    

      for (string &ele : s1)
      {
         s2 += ele + seperator ;
      }
      

      return s2.substr(0,s2.length() - seperator.length()) ;
      
}

string CustumReplaceWordInString(string &s1,string stringToReplace ,string &ReplaceTo ,bool matchCase = true)
{
   //short pos = s1.find(stringToReplace)  ;

        vector <string> vString ;
          vString =    SplitFunction(s1," ") ;

          for (string &ele : vString)
          {
            if(matchCase)
            {
                if(ele  == stringToReplace)
                {
                  ele = ReplaceTo ;
                }
            }else
            {
                 if(LowerAllString(ele)  == LowerAllString(stringToReplace))
                {
                  ele = ReplaceTo ;
                }
            }
          }
          
      


       return JoinString(vString," ") ;
}




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

  //  string s1 = MyLib::ReadString("Please ENter Your String? ")  ;












         string S1 = "Welcome to Jordan , Jordan is a nice country";
string StringToReplace = "jordan";
string ReplaceTo = "USA";
cout << "\nOriginal String:\n" << S1;
cout << "\n\nReplace with match case: ";
cout << "\n" << CustumReplaceWordInString(S1,StringToReplace, ReplaceTo);
cout << "\n\nReplace with dont match case: ";
cout << "\n" << CustumReplaceWordInString(S1,StringToReplace, ReplaceTo, false);







   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
