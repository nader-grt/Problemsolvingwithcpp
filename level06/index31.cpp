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
                         string line ;

                         cout<<message<<endl ;
                         getline(cin,line)  ;


    return line ;
}



void PrintFirstLetterEachWord(string line)
{

         bool IsFirstWord  = true ;

         for (short i = 0; i < line.length(); i++)
         {
             

             if(line[i]  != ' '  && IsFirstWord)
             {
                cout<<line[i] <<endl ;
             }

             IsFirstWord  = (line[i]  == ' ')  ? true : false ;
         }
         
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




PrintFirstLetterEachWord(ReadString("Enter pleaze your string? "))  ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
