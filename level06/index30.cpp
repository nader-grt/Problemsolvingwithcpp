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

            string    line ;

            cout<<message <<endl  ;
            getline(cin,line)  ;
            
             
          return line ;
            
   }


   void PrintFirstLetter(string line)
   {

    if(line[0] != ' ')
    cout<<line[0] << "  " ;

    for (int i = 0; i < line.size() ; i++)
    {
       if(line[i] == ' ')
       {
          cout<<line[i + 1]<< "  ";
       }
    }
    
   }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



PrintFirstLetter(ReadString("\n Enter Your String? "))  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
