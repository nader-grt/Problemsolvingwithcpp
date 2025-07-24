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

     string FullName = "Nader Chargui"  ;
    clsPerson(/* args */)
    {


    }
    ~clsPerson()
    {

    }
};



class clsEmployee  : public clsPerson
{




  public:

    string Title = "CEO"  ;
    clsEmployee(/* args */)
    {


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


          clsEmployee  Employee  ;
          clsPerson *Person  = &Employee  ;

          cout<<Person->FullName <<endl ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
