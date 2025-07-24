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


         class   clsAddress
         {
             public:
                    string AddressLine1;
                    string AddressLine2;
                    string City;
                    string Country;


             void Print()
             {
                   cout << "\nAddress:\n";
                   cout << AddressLine1 << endl;
                   cout << AddressLine2 << endl;
                   cout << City << endl;
                   cout << Country << endl;
             }
         } ;




private:
     string FullName ;
public:


       clsAddress  Address ;

    clsPerson(/* args */)
    {
        FullName = "Nader Chargui";
        Address.AddressLine1 = "Building 10";
        Address.AddressLine2 = "Queen Rania Street";
        Address.City = "Ariana";
        Address.Country = "Tunisia";

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



   clsPerson Person ;
   Person.Address.Print()  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
