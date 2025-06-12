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


   string JoinString(  vector <string> vElements ,   string seperator)
   {
               string s1 =""  ;
              for (string &ele : vElements)
              {
                s1 = s1 + ele + seperator  ;
              }
              return   s1.substr(0,(s1.length() - seperator.length()))     ;
   }

    string JoinString(string vElements[100] ,   string seperator ,short length = 5)
   {
               string s1 =""  ;

               short countLength = 0 ;
                     for (short  i = 0; i < length ; i++)
                     {
                        /* code */
                        s1 =s1 +  vElements[i]  + seperator ;
                        countLength +=  vElements[i].length()  + seperator.length();
                     }
                     

              //  s1 = s1 + ele + seperator  ;
              cout<<"\n  what is countLength of string  " <<s1.length()  <<"  \n" ;
              cout<<"\n  what is countLength " <<countLength  <<"  \n" ;

              // using this  s1.length() without countLength
              //  delelete line countLength +=  vElements[i].length()  + seperator.length();
              return   s1.substr(0,(countLength - seperator.length()))     ;
   }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

          vector <string> vElements = {"nader","kossay","oday","ahmed","ali"}  ;


                string seperator = "#";

          string arr[]  = {"nader","kossay","oday","ahmed","ali"}  ;

         short length = 5 ;


  cout<<"Join with vector \n";
  cout<<JoinString(vElements,seperator)  ;




  cout<<"\n Join with array  \n";
  cout<<JoinString(arr,seperator,length)  ;









   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
