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



int arr[]  = {10,20,30,40} ,*ptr ;
ptr = arr ;
cout << "\n Addresses are:\n";
cout<<"\n 0\t is : "<<ptr <<endl ;
cout<<"\n 1\t is : "<<ptr +1 <<endl ;
cout<<"\n 2\t is : "<<ptr + 2 <<endl ;
cout<<"\n 3\t is : "<<ptr + 3 <<endl ;






//ptr is equivalent to &arr[0];
//ptr + 1 is equivalent to &arr[1];
//ptr + 2 is equivalent to &arr[2];
//ptr + 3 is equivalent to &arr[3];


cout << "\n \n Values are: \n \n";
cout<<"\n 0\t is : " << setw(4) <<*(ptr) << endl;
cout<<"\n 1\t is : " <<setw(4) << *(ptr + 1) << endl;
cout<<"\n 2\t is : " <<setw(4) <<*(ptr + 2) << endl;
cout<<"\n 3\t is : " <<setw(4) << *(ptr + 3) << endl;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
