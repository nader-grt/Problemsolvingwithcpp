#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     


#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;


void Function2();
void Function4()
{
cout << "Hi I'm function4 " << endl;
}
void Function3()
{
Function4();
}
void Function2()
{
Function3();
}
void Function1()
{
Function2();
Function4();
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

// PEEK TO DEFINITION
//CALL HEIRACHEY
//FIND ALL REFERENCES 
// GOT TO DEFINITION
// GO TO DECLARATION
// RENAME SYMBOL 

         Function1()   ;

















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
