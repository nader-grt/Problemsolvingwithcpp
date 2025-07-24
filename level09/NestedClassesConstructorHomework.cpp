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
     string _FullName ;




         class   clsAddress
         {
             private:
                    string _AddressLine1;
                    string _AddressLine2;
                    string _City;
                    string _Country;

            public:


            void SetAddressLine1(string addressline1)
            {
                _AddressLine1  = addressline1 ;
            }

            string getAddressLine1()
            {
                return _AddressLine1 ;
            }

            void SetAddressLine2(string addressline2)
            {
                _AddressLine2  = addressline2 ;
            }

            string getAddressLine2()
            {
                return _AddressLine2 ;
            }

            void SetCountry(string country)
            {
                _Country  = country ;
            }

            string getCountry()
            {
                return _Country ;
            }


            void SetAddressLine(string city)
            {
                _City  = city ;
            }

            string getCity()
            {
                return _City ;
            }

                 clsAddress(string addressLine1,string addressLine2,string city, string country)
                 {

                    _AddressLine1 = addressLine1 ;
                    _AddressLine2 = addressLine2 ;
                    _City         = city ;
                    _Country      = country ;
                 }

             void Print()
             {
                   cout << "\nAddress:\n";
                   cout << _AddressLine1 << endl;
                   cout << _AddressLine2 << endl;
                   cout << _City << endl;
                   cout << _Country << endl;
             }
         } ;





public:

        string setFullName(string FullName) 
        {       
              _FullName = FullName; 
        }


        string getFullName()
         {
             return _FullName ; 
         }
      


      
         
          clsAddress Address =  clsAddress("", "","",""); 
    
    
    
        clsPerson(string fullName, string addressLine1, string addressLine2, string city, string country)   
        {       
            
              _FullName = fullName;


            //initiate address class by it's constructor  
            
                  Address =  clsAddress (addressLine1, addressLine2, city, country); 
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



   clsPerson Person("Nader Chargui","Street Happy 103 ","Kasserine","Ariana","Tunis") ;
   Person.Address.Print()  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
