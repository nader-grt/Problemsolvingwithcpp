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



char  ReadChar(string message)
{
    char ch  = ' ' ;

      cout<<message<<endl ;
      cin>>ch ;
    return ch ;
}


char  InvertedEachCharacter(char c)
{

    return isupper(c)  ? tolower(c) : toupper(c) ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


char ch1 = ReadChar("Enter please your letter one? ")  ;

cout<<"\n Inverted Letter \n \n "  ;


cout<<InvertedEachCharacter(ch1)  ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
