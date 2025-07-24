// #pragmawarning(disable : 4996) 

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




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




   time_t t = time(0);  // get time now 
   tm *now  = localtime(&t)  ;

   cout<<"\n year is " <<now->tm_year  + 1900 ;
   cout<<" \n  Month is  "<<now->tm_mon + 1 ;
   cout<<" \n  Days is " <<now->tm_mday  ; 
    //  char* dt = ctime(&t);  // convert in string form  
      
    //    cout << "Local date and time is: " << dt << "\n";  
     
     
    //  // converting now to tm struct for UTC date/time 
     
    //  tm* gmtm = gmtime(&t);  
      
    //    dt = asctime(gmtm);   
       
    //     cout << "UTC date and time is: " << dt;

















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
