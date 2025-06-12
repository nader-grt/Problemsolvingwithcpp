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

vector <string> SplitFunction(string s,string &seperator)
{
       vector <string> vstring ;
        short pos = 0 ;
        string sword = "" ;

        while ( (pos = s.find(seperator)) != string::npos)
        {
            sword = s.substr(0,pos) ;
            if (sword != " ")
            {
              vstring.push_back(sword) ;
            }
            s.erase(0,pos + seperator.length()) ;
        }
        
       if (s != " ")
            {
              vstring.push_back(s) ;
            }

       return vstring ;
}


    string ReverseWordInString(string s,string &seperator)
    {
        string s2 ="" ;
            vector <string> vstring ;
            vstring = SplitFunction(s,seperator) ;

            vector <string> ::iterator iter = vstring.end() ;
            while ( iter != vstring.begin())
            {
               --iter ;
               s2 = s2 + *(iter) + seperator ;
            }
            


        return s2.substr(0,s2.length() -1) ;
    }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


         string S1 = MyLib::ReadString("PLease Enter Your Sting? ") ,seperator = " ";
         
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
