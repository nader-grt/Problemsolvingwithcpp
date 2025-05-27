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

#include "../level05/LibraryOrPackage/MyLib.h" 


using namespace std ;

void FillNumberWithMatrixRandomNumber( int* * arr , int number)
{



   for (int i = 0; i < number; i++)
   {

       for (int j = 0; j < number; j++)
   {
      arr[i] [j]= MyLib::RandomNumber(1,100) ;
   }
     
   }
   
    
    
}


void PrintArray(int  * * arr , int number)
{

    for (int i = 0; i < number; i++)
    {

         for (int j = 0; j < number; j++)
    {
       cout<<setw(5)<<arr[i] [j] ;
    }
    cout<<"\n";
      
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Matrix  Dynamic 3 x 3  using c++               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

  

// int * ptr ,number = 0 ;

// number = MyLib::ReadNumber("\n Enter a number of Matrix?") ;

//   ptr   =  new int[number][number] ;


  int size = MyLib::ReadNumber("\nEnter the matrix size: ");
  // Allocate rows
    int** matrix = new int*[size];
    for (int i = 0; i < size; ++i)
        matrix[i] = new int[size];  // Allocate columns


FillNumberWithMatrixRandomNumber(matrix,size)  ;

PrintArray(matrix,size)  ;



  for (int i = 0; i < size; ++i)
        delete[] matrix[i];
    delete[] matrix;

 // delete[] new int[number]  ;






   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
