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


string JoinString(vector <string> vElements ,string seperator)
{
     string cAllElements = ""  ;
     int size = vElements.size() ;
     int count = 0 ;


     for (auto &element  : vElements )
     {
         if(size > 0)
         {
          cAllElements += element + seperator;
          count++ ;
         }
         if(count == size)
         {
            cAllElements += element  ;
         }

     }
     
       return cAllElements  ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

       vector <string> vElements  = {"ahmed","ali" ,"nader","kossay"}  ;



         string seperator = "," ;

cout<<JoinString(vElements ,seperator )  ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
