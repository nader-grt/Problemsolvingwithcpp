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
    clsPerson(int Id ,string firstName,string lastName,string phone,string email)
    {
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










int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




clsPerson Person(10,"Nader","Chargui","+216 56 14 85 14","charguinadar@gmail.com")   ;


Person.PrintInfo()  ;
Person.SendEmail("Hi","How are you")  ;
Person.SendSmS("How are you")  ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
