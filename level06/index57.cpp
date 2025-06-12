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


string JoinString( vector <string> vElments,string seperator)
{
         string S1 ="" ;
         for (string &ele : vElments)
         {
          
            S1  =S1 + ele +  seperator;
         }
         
        return S1.substr(0,(S1.length() - seperator.length())) ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


           vector <string> vElments = {"nader","kossay","baba" ,"chayma","mama"} ;

           string seperator = " ";

      cout<<"\n Vector After join \n" ;
  cout<<    JoinString(vElments ,seperator)  ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
