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

   int _ID  = 10 ;
   string _FirstName ;
   string _LastName  ;
public:
   


       //   Read only 
   int  getID()
   {

    return _ID  ;
   }

   void setFirstName(string firstName)
   {
     _FirstName  = firstName ;
   }

   string getFirstName()
   {

    return _FirstName  ;
   }

   void setLastName(string lastName)
   {
    _LastName   = lastName ;
   }
    
    string getLastName()
    {
        return    _LastName   ;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName   ;
    }

};











int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

    clsPerson  Person ;
    Person.setFirstName("Nader")   ;
    Person.setLastName("Chargui")   ;



    cout<<"First Name  is "<<Person.getFirstName()  <<endl ;
    cout<<"Last Name   is "<<Person.getLastName()  <<endl ;
    cout<<"Full Name  is "<<Person.FullName()  <<endl ;


   














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
