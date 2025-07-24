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



class clsPerson
{
private:
    /* data */
public:
string firstName ;
string lastName ;


string FullName()
{
    return firstName + " " + lastName ;
}
    
};





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

              clsPerson   Person1 ,Person2 ;
   

              Person1.firstName = "Nader"  ;
              Person1.lastName  = "Chargui" ;


                 Person2.firstName = "Kossay"  ;
              Person2.lastName  = "Chargui" ;


             cout<<  Person1.FullName() <<endl ;


               cout<<  Person2.FullName() <<endl ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
