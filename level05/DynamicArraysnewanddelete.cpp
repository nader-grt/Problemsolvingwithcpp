#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



int * ptr ,length ,arr[]= {};

  length = MyLib::ReadNumber("\n Enter Total number what you want? ") ;

  ptr = new int[length] ;



          for (int i = 0; i < length; i++)
          {
           cout<<"\n Enter the grade of student number "<<i +1 <<endl ;
           cin>>*(ptr + i) ;

          }
          
          for (int i = 0; i < length; i++)
          {
            cout<<" \n Grade for Student   " <<i+1 <<" is   : " <<*(ptr + i ) ;
          }
          







delete[] ptr ;


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
