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
    /* data */
public:

       virtual void Print()
       {

        cout<< "\nHi , I am a Person"  ;
       }
    clsPerson(/* args */)
    {

    }
    ~clsPerson()
    {


    }
};



class clsEmployee : public clsPerson
{



public:

       void Print()
       {

        cout<< "\nHi , I am a Employee"  ;
       }

} ;



class clsStudent : public clsPerson
{


  
public:

       void Print()
       {

        cout<< "\nHi , I am a Student"  ;
       }
    
} ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


       clsEmployee Employee ;
       clsStudent  Student ;


       Employee.Print()  ;
       Student.Print()  ;


       clsPerson * Person1 = &Employee ;
       clsPerson  * Person2  = &Student ;


cout<<"\n \n-----------------------------------------\n\n"  ;
       Person1->Print()  ;
       Person2->Print()  ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}

