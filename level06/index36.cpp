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

  string UpperEachWordInString(string s1)
  {
             // bool IsFirstWord  = true  ;
                   for (short i = 0; i < s1.length(); i++)
                   {
                         if(s1[i] != ' ' )
                           {
                             s1[i]  = toupper(s1[i] )  ;
                           }else   if(s1[i] == ' ' )
                           {
                             s1[i]  = s1[i]   ;
                           }
                          //   IsFirstWord =   (s1[i] == ' ')  ; 

                   }
                   
                return s1  ;
  }

  string LowerEachWordInString(string s1)
  {
      //bool IsFirstWord  = true  ;
  
                   for (short i = 0; i < s1.length(); i++)
                   {
                      if(s1[i] != ' ' )
                           {
                            s1[i]  = tolower(s1[i] )  ;
                           }else   if(s1[i] == ' ' )
                           {
                             s1[i]  = s1[i]   ;
                           }

                            // IsFirstWord =   (s1[i] == ' ')  ; 
                   }
                   
                return s1  ;
  }



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


string input  =  ReadString("Please enter your string? ")  ;


cout<<"\n String After upper is : \n";
cout<< UpperEachWordInString(input)  ;

cout<<"\n String After lower is : \n";
cout<< LowerEachWordInString(input)  ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
