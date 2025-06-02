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

  int static count = 0 ; 


short CountEachWOrdInString(string s1)
{
         
    string delim = " "  ;

    short pos ;
    string sword ;

    while ( (pos = s1.find(delim))  !=  string::npos )
    {
          sword  = s1.substr(0,pos)  ;
          if(sword != " ")
          {
            cout<<"\t" <<sword <<endl ;
               count++ ;
            
          }
          s1.erase(0, pos + delim.length())  ;
    }

    if(s1 !=  " ")
    {
        cout<<"\t"<<s1 <<endl ;
        count++ ;

         //  CountEachWord(count) ;

    }

              return count ;
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



string S1  = MyLib::ReadString("Enter your string ?") ;


cout<<" \n \n \n"  ;


printf("The numbers of word in string is %d " ,  CountEachWOrdInString(S1));








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
