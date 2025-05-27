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

void FillMatrixNumberWithRandom(int arr[3][3],int &number)
{

    for (int i = 0; i < number; i++)
    {
       for (int j = 0; j < number; j++)
       {
           arr[i][j]  = MyLib::RandomNumber(1,100) ;
       }
       
    }
    
}

void PrintMatrixNumberWithRandom(int arr[3][3],int &number)
{


cout<<"\n \n \n The matrix for " <<number <<" x "<<number<<endl ;

cout<<"\n \n \n \n \n "  ;


    for (int i = 0; i < number; i++)
    {
       for (int j = 0; j < number; j++)
       {
          cout<<setw(4) << arr[i][j]  ;
       }
       cout<<endl ;
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

   int number = MyLib::ReadNumber("\n Enter a number for matrix?")  ;

int arr[3][3]   ;


FillMatrixNumberWithRandom(arr,number)  ;

PrintMatrixNumberWithRandom(arr,number)  ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
