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


void SwapCallByRefrence(int &n1,int &n2)
{
    int temp = n1 ;
    n1 = n2 ;
    n2 = temp ;
}

void SwapCallByPointer(int *n1,int *n2)
{
    int temp = *n1 ;
    *n1 = *n2 ;
    *n2 = temp ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int a = 1  , b = 2 ;

 cout<<"\n \n \n ========================    BEFORE SWAP USING CALL BY REFERENCE  ==============================================\n";

cout<< "\n THE VALUE OF a before SwapCallByRefrence"<<setw(9)<<a <<endl ;
cout<< "\n THE VALUE OF b before SwapCallByRefrence"<<setw(9)<<b <<endl ;


SwapCallByRefrence(a,b)  ;

cout<< "\n THE VALUE OF a after SwapCallByRefrence"<<setw(9)<<a <<endl ;
cout<< "\n THE VALUE OF b after SwapCallByRefrence"<<setw(9)<<b <<endl ;




 cout<<"\n \n \n  \n \n \n  ========================    BEFORE SWAP USING CALL BY POINTER  ==============================================\n";
a = 1  , b = 2 ;
cout<< "\n THE VALUE OF a before SwapCallByPointer before pointer"<<setw(9)<<a <<endl ;
cout<< "\n THE VALUE OF b before SwapCallByPointer before pointer"<<setw(9)<<b <<endl ;


SwapCallByPointer(&a,&b)  ;

cout<< "\n THE VALUE OF a after SwapCallByPointer with pointer"<<setw(9)<<a <<endl ;
cout<< "\n THE VALUE OF b after SwapCallByPointer with pointer"<<setw(9)<<b <<endl ;




   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
