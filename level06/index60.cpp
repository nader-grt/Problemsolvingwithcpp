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

string JoinString(string arr[100],short length , string seperator)
{
               string s2  = "" ;
                  for (short  i = 0; i < length; i++)
                  {
                     s2 = s2 + arr[i] + seperator ;
                  }
                  
  return s2.substr(0,s2.length() - seperator.length()) ;
}


void AddElementString(string word, string arr[100] ,short &length)
{

        length++ ;
        arr[length -1]  = word ;

}

     void PrintEachWordInString(string s1,string arr[100] ,short &length)
     {
            short pos = 0 ;
           string    sword  ;
           string seperator = " ";
           while ((pos = s1.find(seperator) ) !=  string::npos)
           {
              sword = s1.substr(0 , pos) ;
              if(sword != " ")
              {
               AddElementString(sword,arr,length) ;
              }
              s1.erase(0,pos + seperator.length()) ;
           }
           
           if(s1 != " ")
           {
            AddElementString(s1,arr,length) ;
           }

     }


       string ReversedWordInString(string arr[100] ,short length)
       {
          string s2 = "" ,  seperator = " ";


          for (short i = length; i >= 0; i--)
          {

             
              
                  s2 = s2 + arr[i]  + seperator  ;
              
           
          }

          return s2.substr(0,s2.length() - seperator.length())  ;
          
       }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


            string s1 = MyLib::ReadString("Please Enter Your String? ")  ;

short  length  ;

 
string arr[100]  ;

cout<<"String before reversed \n" ;
cout<<s1 ;

PrintEachWordInString(s1,arr,length)  ;

   string stringJoin = JoinString(arr,length," ")  ;

cout<<"\n Reversed word after iniale string \n"  ;


cout<<ReversedWordInString(arr,length)  ;
 
        cout<<" \n \n"  ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
