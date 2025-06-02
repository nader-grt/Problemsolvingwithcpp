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


  struct StHandleString {
         int   countCapitalLetter = 0 ;
    int   countSmallLetter = 0 ;
          int   lengthString = 0 ;
          string messageUser  = "" ;
  }  ;


  string ReadString(string message)
  {
         string line = "" ;

         cout<<message<<endl ;
         getline(cin,line)  ;
return line ;
  }

StHandleString  HandleStringWithLetter(string  s)
{
           StHandleString  HandleString  ;
    for (short i = 0; i < s.length(); i++)
    {
          if(isupper(s[i])  )
          {
            HandleString.countCapitalLetter++ ;
          }else{

            HandleString.countSmallLetter++ ;
          }
    }
                          HandleString.lengthString  = s.length() ;      
    return HandleString  ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


StHandleString  HandleString  ;



      HandleString.messageUser  =  ReadString("Enter your string ?")  ;
string s1 =   HandleString.messageUser  ;


      HandleString =        HandleStringWithLetter(s1)  ;

      cout <<"\n  Message of user is "  <<s1  ;

cout<<"\n \n Count Capital letter is \t" <<  HandleString.countCapitalLetter  ;  

cout<<"\n \n Count small letter  is \t" << HandleString.countSmallLetter   ;  

cout<<"\n \n Length of String   is \t" <<  HandleString.lengthString  ;  





   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
