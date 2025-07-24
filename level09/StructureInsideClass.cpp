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
   struct StAddress
   {
    string AddressLine1 ;
    string AddressLine2 ;
    string Country ;
    string City ;
   };
   
public:

     string FullName ; 
     StAddress  Address ;

    clsPerson()
    {
        FullName =  "Nader Chargui" ;
        Address.AddressLine1 = "Kasserine" ;
        Address.AddressLine2 = "Tunis Ariana"  ;
        Address.Country  = "Tunis"  ;
        Address.City  = "Kasserine"   ;

    }
    
    void PrintAddress()
    {
        cout<<"\nFull Name      "<<FullName <<endl ;
        cout<<"\nAddress Line 1 "<<Address.AddressLine1 <<endl ;
        cout<<"\nAddress line 2 "<<Address.AddressLine2 <<endl ;
        cout<<"\nCountry        "<<Address.Country<<endl ;
        cout<<"\nCity           "<<Address.City <<endl ;
    }


    ~clsPerson()
    {

    }
};





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




   clsPerson person ;
   person.PrintAddress()  ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
