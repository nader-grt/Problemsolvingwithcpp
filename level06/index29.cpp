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


void  FibnanciSerie(int Number , short Prev1 ,short Prev2)
{
int FibNumber = 0 ;



            if(Number > 0)
            {
             FibNumber =Prev1 + Prev2  ;
             Prev2  = Prev1 ;
             Prev1 = FibNumber  ;
             cout<<FibNumber <<"  " ;
                 FibnanciSerie(Number -1 , Prev1,Prev2)  ;
            }
   
       
          
           
         
         
        
    
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


  FibnanciSerie(10,0,1)  ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
