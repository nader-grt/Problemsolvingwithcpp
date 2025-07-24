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



class clsAddress
{
private:
   string _AddressLine1 ;
   string _AddressLine2 ;
   string  _PoBox ;
   string _ZipCode  ;
public:
    clsAddress(string addressLine1, string addressLine2,string poBox,string zipCode)
    {
          _AddressLine1 =  addressLine1 ;
           _AddressLine2  = addressLine2  ;
             _PoBox   =   poBox  ;
             _ZipCode  = zipCode ;


    }


    void setAddressLine1(string addressLine1)
    {
      _AddressLine1  =  addressLine1 ;
    }

    string getAddressLine1()
    {
      return _AddressLine1 ;
    }
   

   void setAddressLine2(string addressLine2)
   {

    _AddressLine2  = addressLine2 ;
   }

   string getAddressLine2()
   {

    return _AddressLine2 ;
   }

   void setPoBox(string poBox)
   {
    _PoBox = poBox ;
   }


   string getPoBox()
   {

    return _PoBox ;
   }

   void setZipCode(string zipCode)
   {
    _ZipCode = zipCode ;
   }

   string getZipCode()
   {

    return _ZipCode ;
   }

        void PrintDetails()
        {

                 cout<<"\n\n\nAddress Details \n" ;  
                cout<<"------------------------------\n";


          cout<<"First Address Line 1 "<<_AddressLine1  <<endl ;
          cout<<"Second Address Line 2 "<<_AddressLine2  <<endl ;

          cout<<"The PoBox "<<_PoBox  <<endl ;
          cout<<"The ZipeCode  "<<_ZipCode  <<endl ;
        }

};







int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



           clsAddress  Address("Tunis ,Ariana City Nozha","Kasserine","100ab","1200")  ;

Address.PrintDetails()   ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
