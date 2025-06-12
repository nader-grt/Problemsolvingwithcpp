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

string TrimLeftFunction(string s1)
{
      string sword ;

                short pos ;
                string sepeator = " "  ;
                  char ch = ' ' ;

   

      int i = 0 ;

        do
        {
              if(s1[i] == ch)
                    {
                       s1.erase(s1.find(ch) , i+1) ;
                    }
            i++ ;
        } while ( s1[i] == ch);
        
        return s1 ;


      
                 if(s1 == " ")
              return "" ;
        

}


 string TrimRightFunction(string s1)
 {
                  int i = s1.length() ;
         char ch = ' '  ;
        do
        {
              if(s1[i] == ch)
                    {
                       s1.erase( i - 1 , i) ;
                    }
            i-- ;
        } while ( s1[i] == ch);
        
        return s1 ;

 }

 string TrimFunction(string s1)
 {

   return TrimRightFunction(TrimLeftFunction(s1))  ;
 }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Trim function implment using c++               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



         



                        
   //     vector <string> vTokenElement  ;

     //   string s1 = MyLib::ReadString("Enter your string ? ") ;

       //  string delimt = " "  ;
                string s2 =  "          Nader Chargui     " ;

cout<< "Trim Left  = " <<TrimLeftFunction(s2) ;
  cout<<"\n"  ;
cout<< "Trim Right = "<< TrimRightFunction(s2) ;

cout<<"\nTrim      = "<<TrimFunction(s2)  ;




   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
