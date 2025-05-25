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




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int *ptrx ,*ptry ;

// dynamically allocate memory
ptrx = new int ;
ptry  = new float ;



*ptrx  = 100 ;
*ptry = 10.70 ;



cout << *ptrx << endl;
cout << *ptry << endl;








// declare an int pointer
int* ptrX;
// declare a float pointer
float* ptrY;
// dynamically allocate memory
ptrX = new int;
ptrY = new float;
// assigning value to the memory
*ptrX = 45;
*ptrY = 58.35f;
cout << *ptrX << endl;
cout << *ptrY << endl;
// deallocate the memory
delete ptrX;
delete ptrY ;















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
