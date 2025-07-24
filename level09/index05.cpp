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
#include <functional>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;




template<typename T>
class Property {
private:
    function<T()> getter;
    function<void(const T&)> setter;

public:
    Property(function<T()> getFn, function<void(const T&)> setFn)
        : getter(getFn), setter(setFn) {}

    // Getter usage
    operator T() const {
        return getter();
    }

    // Setter usage
    Property<T>& operator=(const T& value) {
        setter(value);
        return *this;
    }
};



class clsPerson
{
private:
    int _ID = 10 ;
    string _FirstName ;
    string _LastName  ;
public:

     
      Property<string> FirstName;

    // Constructor to bind methods to property
    clsPerson()
        : FirstName(
            std::bind(&clsPerson::getFirstName, this),
            std::bind(&clsPerson::setFirstName, this, std::placeholders::_1)
        ) {}

         int getID()
         {
            return _ID  ;
         }



             void setFirstName(string firstName)
         {
             _FirstName = firstName  ;
         }

         string GetFirstName(){
            return _FirstName  ;
         }



             void setLastName(string lastName)
         {
             _LastName = lastName  ;
         }

         string getLastName(){
            return _LastName  ;
         }

//        __declspec(property(get = getFirstName, put = setFirstName)) string FirstName ;

       //  __declspec(property(get = getFirstName, put = setFirstName)) string FirstName;

     //   Property<string> FirstName;
  //  _USE_DECLSPECS_FOR_SAL(property(get = getFirstName, put = setFirstName)) string FirstName ;
__declspec(property(get = GetFirstName, put = setFirstName)) string FirstName;
    
};





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


    clsPerson  Person  ;
    Person.setFirstName("Nader") ;
    cout<<Person.getFirstName() <<endl ;


    cout<<"-------------------\n \n " ;


Person.FirstName = "Ahmed" ;
//cout<<Person.FirstName <<endl  ;


printf("first name  ",Person.FirstName ) ;
string name = Person.FirstName  ;

//cout<<name  ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
