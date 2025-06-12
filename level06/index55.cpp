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
          
string TrimLeft(string s1)
{

              for (short  i = 0; i < s1.length(); i++)
              {
                
                     if(s1[i] != ' ')
                     {
                        return  s1.substr(i,(s1.length() - i))   ;
                     }
              }
                return "" ;
}

string TrimRight(string s1)
{

              for (short  i = s1.length() -1; i >= 0; i--)
              {
                   if(s1[i] != ' ')
                     {
                        return  s1.substr(0,i + 1)   ;
                     }
              }
                  return "" ;
}


string Trim(string s1)
{

    return    TrimRight(TrimLeft(s1)) ;
}


void PrintBoxedOutput(const string &title, const string &content) {
    string border(40, '=');
    cout << border << "\n";
    cout << title << "\n";
    cout << border << "\n";
    cout << content << "\n";
    cout << border << "\n\n";
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;





                string s2 =  "       Nader Chargui       " ;
    // Display the results in a clean layout
    PrintBoxedOutput("Original String", "[" + s2 + "]");
    PrintBoxedOutput("TrimLeft Result", "[" + TrimLeft(s2) + "]");
    PrintBoxedOutput("TrimRight Result", "[" + TrimRight(s2) + "]");
    PrintBoxedOutput("Trim (Both) Result", "[" + Trim(s2) + "]");
       













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
