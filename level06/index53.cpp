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

vector<string> SplitFunction(string s1 ,string &delim)
{
           vector<string>  vToken ;
           short pos = 0 ;
           string sword ;
                    
           while ( (pos = s1.find(delim))  != string::npos )
           {
            sword  = s1.substr(0, pos)  ;
               if(sword != " ")
               {
                  
                   vToken.push_back(sword)  ;
               }
               s1.erase(0, pos + delim.length()) ;
           }
            
            if(s1 != " ")
            {
                
                  vToken.push_back(s1)  ;
            }
         
        
           return vToken ;
}


void DisplayTokenElement(vector <string> vTokenElement)
{


       cout<<"Tokens "<<vTokenElement.size()  <<endl ;
    for (string  &ele : vTokenElement)
    {
       

            cout<<ele <<endl ;
          
    }
    


}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




        vector <string> vTokenElement  ;

        string s1 = MyLib::ReadString("Enter your string ? ") ;

         string delimt = " "  ;


          vTokenElement =  SplitFunction(s1,delimt)  ;

DisplayTokenElement(vTokenElement)   ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
