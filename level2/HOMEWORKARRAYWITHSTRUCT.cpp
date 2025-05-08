#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


struct StInfo {
    string FirstName ;
    string LastName ;
    string email ;
    short BuildingNo ;
} ;
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===            Training with Struct Array c++ languages App       ====\n"                              ;
   cout<<"======================================================================\n";
StInfo Info[2]  ;

Info[0].FirstName  = "Nader"  ;
Info[0].LastName  ="Chargui"  ;
Info[0].email  = "nader@nader"  ;
Info[0].BuildingNo  = 10 ;


Info[1].FirstName = "Ali"  ;
Info[1].LastName  = "Chargui"  ;
Info[1].email  = "ali@ali"  ;
Info[1].BuildingNo  = 152  ;

cout<<"##################  Person info 1 ############# \n \n \n" ;

cout<<Info[0].FirstName <<endl ;
cout<< Info[0].LastName  <<endl ;
  cout <<Info[0].email <<endl  ;
cout<< Info[0].BuildingNo <<endl ;









cout<<"##################  Person info 2 ############# \n \n \n" ;


cout<<Info[1].FirstName <<endl ;
cout<< Info[1].LastName  <<endl ;
  cout <<Info[1].email <<endl  ;
cout<< Info[1].BuildingNo <<endl ;



     cout<<"\n" ;
    return 0;
}
