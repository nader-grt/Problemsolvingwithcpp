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
    string _AddressLine2  ;
    string _PoBox  ;
    string _ZipeCode  ;
public:
    clsAddress( string addressLine1 ,
    string addressLine2  ,
    string poBox  ,
    string zipeCode  )
    {
          _AddressLine1  = addressLine1  ;
     _AddressLine2  = addressLine2 ;
     _PoBox   =  poBox ;
     _ZipeCode   = zipeCode  ;
    }


       clsAddress(clsAddress & oldObject)
    {
          _AddressLine1  = oldObject.getAddressLine1()  ;
     _AddressLine2  = oldObject.getAddressLine2() ;
     _PoBox   =  oldObject.getPoBox() ;
     _ZipeCode   = oldObject.getZipeCode()  ;
    }
   
     void setAddressLine1(string addressLine1)
     {
         
            _AddressLine1  = addressLine1 ;
     }


   string getAddressLine1()
   {
    return  _AddressLine1   ;
   }


    void setAddressLine2(string  addressLine2 )
    {

         _AddressLine2  =  addressLine2 ;
    }


    string getAddressLine2()
    {

        return  _AddressLine2 ; 
    }


    void setPoBox(string poBox)
    {
        _PoBox = poBox ;
    }

    string  getPoBox( )
    {
    return  _PoBox  ;
    }

    void setZipeCode(string zipeCode)
    {
        _ZipeCode = zipeCode ;
    }

    string getZipeCode()
    {
        return _ZipeCode  ;
    }

        void PrintAddressDetaile()
        {

            cout<<"\n\nAddress Details"  ;
            cout<<"\n-------------------------------------\n" ;

            cout<<"First Address line 1"<<_AddressLine1<<endl ;
            cout<<"Second Address line 2"<<_AddressLine2 <<endl ;
            cout<<"The PoBox "<<_PoBox<<endl ;
            cout<<"The ZipeCode "<<_ZipeCode <<endl ;
        }

};


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


clsAddress Address1("Tunis ,Araiana ,City NOzha","Kasserine Ezouhoure","102ab","1200")  ;

Address1.PrintAddressDetaile()  ;


clsAddress Address2  = Address1  ;

Address2.PrintAddressDetaile()  ;


















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
