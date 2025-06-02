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
          string line ;

           cout<<message<<endl ;
           getline(cin,line)  ;
          return line ;
      }
// void getchar(char c)
// {
//     return c ;
// }
//       void FirstLellerCapital(string  line  )
//       {

//             bool IsFirstWord = true ;
//             char c = ''  ;

//             for (short i = 0; i < line.length(); i++)
//             {
              

//                 if(line[i] != ' '  &&  IsFirstWord)
//                 {
//                        line[i] = toupper(line[i]);
                    
//                      c =  line[i] ;
//                       getchar(c) ;
//                      continue;
//                 }
//                 IsFirstWord = line[i]  ==  ' ' ? true :false ;
//             }
           
//       }


string  LineWithFirstWordIsCapital(string line)
{

      
            bool isFistWord =  true ;

              for (short i = 0; i < line.length(); i++)
              {
                      if(line[i] != ' ' && isFistWord )
                      {
                        line[i] = toupper(line[i]);

                      }
                
                  isFistWord  = line[i] == ' ' ? true :false ;
                      
              }
              


            return line  ;

}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;






cout<<LineWithFirstWordIsCapital(ReadString("Please enter your string? "))  ;












   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
