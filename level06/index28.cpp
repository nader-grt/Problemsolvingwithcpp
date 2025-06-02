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


void FibonanciNumber(short Number)
{
int FibNumber = 0 ;
    int Prev1  = 1 ;
    int Prev2 = 0 ;
   
    cout<<"1  " ;


//    if(Number > 0)
//             {
//              FibNumber =Prev1 + Prev2  ;
//              Prev2  = Prev1 ;
//              Prev1 = FibNumber  ;
//              cout<<FibNumber <<"  " ;
//                  FibnanciSerie(Number -1 , Prev1,Prev2)  ;
//             }
    for (short i = 0; i < Number -1; i++)
    { 
            FibNumber =  Prev1 + Prev2 ;
            cout<<"  "<<FibNumber ;
            Prev2  = Prev1  ;
            Prev1  = FibNumber ;
             
           
       
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



FibonanciNumber(10) ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
