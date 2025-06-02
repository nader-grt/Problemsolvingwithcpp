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
      string line = "" ;


         cout<<message<<endl ;
         getline(cin,line)  ;
      return line ;
}


string PrintEachFirstLetterIsPower(string S1)
{


    bool IsFirstLetter = true ;
    for (short i = 0; i < S1.length(); i++)
    {
      if(S1[i] != ' '  &&  IsFirstLetter)
      {
        S1[i]  =   tolower(S1[i])  ;
      }

      IsFirstLetter  = ( S1[i] == ' ' ) ;
    }
    




    return S1 ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

string input =  ReadString("Enter your string ?")  ;

cout<< " Before the conversion is :" <<input <<endl ;

cout <<"After conversion : "<<PrintEachFirstLetterIsPower(input)  ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
