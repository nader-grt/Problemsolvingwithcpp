#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 


//#include "LibraryOrPackage/MyLib.h" 


using namespace std ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

  // printf("The page number = %0*d \n", 2, Page);

   for (int i = 1; i <= 10; i++)
   {
   
        cout<<"\n \n ";
      for (int j = 1; j <= 10; j++)
      {
          int k = i * j  ;
       
        (i*j) <= 10 ?  printf("%0*d \t", 2, k) : printf("%d \t" , k) ;

        // cout<<"\n" ;
        //  printf(" %0*d", 2, i * j) ;
       // printf("%d" , i * j) ;
         // cout<<"\n"  ;
   //  cout<< setw(4) <<result  ;
        
      }
      cout<<endl ;
      
   }
   



















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
