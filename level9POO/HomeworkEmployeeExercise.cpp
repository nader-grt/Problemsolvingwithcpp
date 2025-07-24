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

class clsEmploye
{
private:


    int     _ID ;
    string  _FirstName ;
    string  _LastName ;

    string  _Title  ;
    string  _Email  ;
    string  _Phone  ;
    string  _Salary ;
    string  _Department ;


public:

    clsEmploye(int id,string firstName,string lastName,string title,string email,string phone,string salary,string department)
    {
        _ID  = id ;
        _FirstName = firstName ;
        _LastName  = lastName ;
        _Title   = title ;
        _Email  = email ;
        _Phone  = phone  ;
        _Salary = salary  ;
        _Department = department ;

    }


     void setFirstName(string firstName)
     {

     }

     string getFirstName()
     {
        return _FirstName ;
     }

     void setLastName(string lastName)
     {
        _LastName = lastName ;
     }
     string getLastName()
     {

        return _LastName ;
     }
     string FullName()
     {
        return _FirstName + " " + _LastName  ;
     }


     void setTitle(string title)
     {
        _Title = title ;
     }
     string getTitle()
     {
        return _Title  ;
     }



     void setEmail(string email)
     {
        _Email = email ;
     }
     string getEmail()
     {
        return _Email ;
     }

     void setPhone(string phone)
     {

        _Phone = phone ;
     }


     string getPhone()
     {
        return _Phone ;
     }

     void setSalary(string salary)
     {
        _Salary = salary ;
     }
     string getSalary()
     {
        return _Salary  ;
     }


     void setDepartement(string departement)
     {
        _Department = departement ;
     }
     string getDepartement()
     {
        return _Department  ;
     }




    SendEmail(string Subject ,string Body)
    {
         
         


    }

    SendSMS(string Message)
    {

    }

    Print()
    {

        
    }




    ~clsEmploye()
    {


    }
};





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
