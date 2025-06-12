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

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




//    vector <int> num{100,200,333,40,10}  ;

//    vector <int> ::iterator itr ;


//    for (itr =  num.begin()  ; itr != num.end()  ; itr++)
//    {

//     cout<<"\n ======================== \n" ;
//   cout<< &(*num.begin()) ;
//   cout<< *itr <<"   ";
//    }
   
//    int num1 =1 ,num2 = 71400;
//    cout<<"\n" <<sizeof(num1) ;
//    cout<<"\n" <<sizeof(num2) ;

//    int *ptr  = &num1 ;

//    double dnum1 = 455 ;
//        double *DPtr ;

//   cout<<"\n \n" <<sizeof(ptr) ;

//   DPtr =  &dnum1  ;


//   cout<<"\n" <<sizeof(DPtr) ;


//  int arr[4]  ;

//  cout<<"\n \n \n \n \n **************** \n \n" ;

//  cout<<arr <<"       " ;


int number = 7106 ;

int * ptr = &number ;


  cout << ptr <<endl  ;
ptr = NULL ;
 cout << ptr <<endl  ;
// bool * byte = (bool *) (&number );


//   cout<<"\n" ;
//   cout<<byte <<"   "<<&number  ;
//   cout<<"\n" ;
// for (int  i = 0; i < sizeof(number); i++)
// {
//     cout<<(byte + i) <<"   "<<*(byte + i)  ;
// }


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
