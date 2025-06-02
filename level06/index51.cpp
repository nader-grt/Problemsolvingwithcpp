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
 
  void PrintEachWordInString(string s1)
  {
    string delim = " "  ;

    short pos  ;
    string sword  ;

              while ( (pos = s1.find(delim)) != string::npos )
              {
                  sword = s1.substr(0,pos) ;

                   if(sword != " ")
                   {
                    cout<<"\t " <<sword <<" \n" ;
                   }
                   s1.erase(0, pos  + delim.length()) ;

                   
                }
                if(s1 != " ")
                {
                  cout<< "\t" << s1 <<endl ;
                }
              
  }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

       string s1 = MyLib::ReadString("Please Enter your string ?") ;


       PrintEachWordInString(s1)  ;
      
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
