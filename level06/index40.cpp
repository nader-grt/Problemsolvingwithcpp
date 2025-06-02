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

string ReadString(string message)
{

    string line = ""  ;

          cout<<message<<endl ;
          getline(cin,line)  ;
    return line ;
}

char InverOnceLetter(char ch)
{

    return isupper(ch)  ? tolower(ch) : toupper(ch) ;
}


string InvertedAllString(string s1)
{

             for (short i = 0; i < s1.length(); i++)
             {
                s1[i]  =  InverOnceLetter(s1[i])   ;
             }
             

    return s1  ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


string s1 = ReadString("Please enter your string ?") ;


cout<<"String before handling \n"<<s1 <<endl ;





cout<<"String after handling \n"<< InvertedAllString(s1) <<endl ;










   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
