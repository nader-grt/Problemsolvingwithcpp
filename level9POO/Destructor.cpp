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
    string _FullName ;
public:
    clsPerson(/* args */)
    {
         _FullName  = "Nader Chargui" ;
        cout<<"\n Hi I am Constructor" ;
    }
    ~clsPerson(){

        cout<<"\n Hi I am Destructor" ;
    }
};



void Funct1()
{
    clsPerson Person ;
}


void Funct2()
{
    clsPerson *Person2  = new clsPerson;
    delete Person2  ;
}



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

Funct1()  ;
            Funct2()   ;
 //clsPerson Person ; 
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
