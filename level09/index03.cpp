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
 int x = 5 ;

 int functionone()
 {

    return 15 ;
 }

 protected:
 int variable_2 = 200 ;
 int functionTwo()
 {
    return 10  ;
 }
public:
  string firstName ;
  string lastName ;
  string FullName()
  {

    return firstName + " " + lastName ;
  }


  int function1()
  {

    return functionone() + x  + variable_2 ;
  }
};





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



clsPerson  Person ;
 cout<< Person.function1() <<endl ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
