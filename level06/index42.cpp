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


 short CountLetterSmall(string s1)
 {

      short count = 0 ;

      for (short i = 0; i < s1.length(); i++)
      {
        if(islower(s1[i]))
        count++ ;
      }
      

      return count ;
 }


 short CountLetterCapital(string s1)
 {

      short count = 0 ;

      for (short i = 0; i < s1.length(); i++)
      {
          if(isupper(s1[i]))
          count++ ;
      }
      return count ;
      
 }




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


string s1 = ReadString("Please Enter your string?")  ;

cout<<"\n \n Length of string is : "<<s1.length()    ;

cout<<"\n \n Count of Small letter is : "<<  CountLetterSmall(s1)    ;


cout<<"\n \n Length of Capital letter  is : "<< CountLetterCapital(s1)    ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
