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
  int _ID ;
  string _FirstName ;
  string _LastName ;
  string _Phone  ;
  string _Email ;
public:
    clsPerson()
    {

    }

    clsPerson(int Id ,string firstName,string lastName,string phone,string email)
    {
        _ID = Id  ;
       _FirstName = firstName ;
       _LastName = lastName ;
       _Phone   = phone ;
       _Email  = email ;
    }
        int  getID()
        {
            return  _ID ;
        }

     void setFirstName(string firstName)
     {
        _FirstName = firstName ;
     }

     string getFirstName()
     {

        return _FirstName ;
     }

     void setLastName(string lastName)
     {
        _LastName  = lastName  ;
     }



     string getLastName()
     {

        return _LastName  ;
     }

     string getFullName()
     {
         return _FirstName + " " + _LastName ;
     }

     void setEmail(string email)
     {
        _Email = email ;
     }


     string getEmail()
     {
        return _Email  ;
     }


     void setPhone(string phone)
     {
        _Phone = phone ;
     }

     string getPhone()
     {
        return _Phone ;
     }



     void SendEmail(string Subject , string Body)
     {
        cout<<"\nThe follwing message sent succesufully to email: "<<_Email <<endl ;
        cout<<Subject<<endl ;
        cout<<Body<<endl ;

     }


     void SendSmS(string Message)
     {
      
         cout<<"\nThe follwing SMS sent succesufully to phone: "<<_Phone <<endl ;
         cout<<Message<<endl ;

     }


     void PrintInfo()
     {

        cout<<"\nDetails Info";
        cout<<"\n--------------------------\n";

        cout<<"The First Name "<<_FirstName <<endl ;
        cout<<"The Last Name " <<_LastName <<endl ;
        cout<<"The Full Name " << _FirstName + " " + _LastName <<endl ;
        cout<<"The Phone "  <<_Phone <<endl ;
        cout<<"The Email " <<_Email <<endl ;

     }

    ~clsPerson()
    {


    }
};





class clsEmployee  : public clsPerson
{
    private:
    float _Salary ;
    string _Departement ;
    string _Title  ;

    public :

           
             clsEmployee(int Id ,string firstName,string lastName,string phone,string email ,float salary,string departement,string title) :clsPerson(Id , firstName, lastName, phone, email)
    {
    //    _FirstName = firstName ;
    //    _LastName = lastName ;
    //    _Phone   = phone ;
    //    _Email  = email ;

       _Salary  = salary ;
     _Departement = departement;
     _Title  = title;
    }


       void setTitle(string title)
     {
        _Title = title ;
     }
     string getTitle()
     {
        return _Title  ;
     }

       void setSalary(float salary)
     {
        _Salary = salary ;
     }
     float getSalary()
     {
        return _Salary  ;
     }


     void setDepartement(string departement)
     {
        _Departement = departement ;
     }
     string getDepartement()
     {
        return _Departement  ;
     }


     void PrintInfo()
     {

       // clsPerson::PrintInfo() ;

             cout<<"\nDetails Info";
        cout<<"\n--------------------------\n";

        cout<<"The First Name "<<getFirstName() <<endl ;
        cout<<"The Last Name " <<getLastName() <<endl ;
        cout<<"The Full Name " <<getFullName() <<endl ;
        cout<<"The Phone "  <<getPhone() <<endl ;
        cout<<"The Email " <<getEmail() <<endl ;



            cout<<"The TItle "<<_Title <<endl ;
        cout<<"The Departement  " <<_Departement <<endl ;
        cout<<"The Salary " <<_Salary <<endl ;
     }
};




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

            clsEmployee  Employee (10,"Nader","Chargui","+216 95 120 814","charguinadar@gmail.com",5000,"System administration","Managment Group")  ;

            // Employee.setFirstName("Nader") ;
            // Employee.setLastName("Chargui") ;
            // Employee.setEmail("charguinadar@gmail.com")  ;
            // Employee.setPhone("+216 56 14 85 14")  ;
            // Employee.SendEmail("Hi","How are you") ;
            // Employee.SendSmS("How are you")  ;

            Employee.PrintInfo() ;

















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
