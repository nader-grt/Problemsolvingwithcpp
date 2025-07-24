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




class clsEmployee
{

    private:
    int _ID ;
    string _FirstName ;
    float _Salary ;

public :

  clsEmployee(int id,string firstName,float salary)
  {
      this->_ID = id ;
      this->_FirstName = firstName ;
      this->_Salary = salary ;
  }


static void funct1(clsEmployee Employee)
{
  Employee.Print()  ;
}


    void funct2()
    {
        funct1(*this)  ;
    }

void Print()
{
   cout<<"\nThe Id        "<<_ID<<endl ;
   cout<<"\nThe FirstName "<<_FirstName <<endl ;
   cout<<"\nThe Salary    "<<_Salary <<endl ;
}

  

  ~clsEmployee()
  {


  }
} ;


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



   clsEmployee Employee(101,"Nader",2500);
   Employee.Print()   ;



















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
