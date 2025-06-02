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


char ReadOnceLetter(string message)
{
    char ch = ' ' ;
    cout<<message<<endl ;
      cin>>ch ;
      return ch ;
}



string ReadString(string message)
{
    cout<<message<<endl ;

    string line = " " ;
    getline(cin,line) ;

    return line ;
}


short countLetter(string s1 ,char ch)
{
    short count = 0 ;
             for (short i = 0; i < s1.length(); i++)
             {
                if(ch == s1[i]) 
                {
                    count++ ;
                }
             }
             


    return count ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

string s1  = ReadString("PLease Enter Your String? ") ;

char ch = ReadOnceLetter("PLease Enter a character? ")  ;



 printf("The Letter ' %c ' Count = %d\n", ch ,countLetter(s1,ch));















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
