#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;


struct stEmployee {
    string fullName ;
    float Salary ;
} ;

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


stEmployee  Employee  , *ptrstEmployee  ;

Employee.fullName = "Nader Chargui " ;
Employee.Salary = 1400 ;

cout<<Employee.fullName<<endl ;
cout<<Employee.Salary <<endl ;
ptrstEmployee  = &Employee  ;

cout<<"\n \n \n THE VALUE OF POINTER IS ADDRESS "<<ptrstEmployee <<endl ;


cout<<"\n \n \n THE ADDRESS OF STRUCTURE AS Employee  IS "<<&Employee  <<endl ;


cout<<ptrstEmployee->fullName ;
cout<<ptrstEmployee->Salary ;








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
