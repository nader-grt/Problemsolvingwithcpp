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

void FillMatrixWithRandomNumber(int arr[3][3] ,short rows,short cols)
{

   for (short  i = 0; i < rows; i++)
   {
       for (short  j = 0; j < cols; j++)
       {
        arr[i][j]  = MyLib::RandomNumber(1,100)  ;
       }
       cout<<endl ;
   }
   

}



void PrintMatrixWithRandomNumber(int arr[3][3] ,short rows,short cols)
{
     cout<<"\n \n      The follwing of Matrix 3 x 3 is : \n \n \n" ;
      for (short  i = 0; i < rows; i++)
   {
       for (short  j = 0; j < cols; j++)
       {
          cout<<setw(6)<< arr[i][j] ;
       }
       cout<<endl ;
   }
    
}

int RowSum(int arr[3][3],int rowNumber,int cols )
{
        int Sum = 0 ;


       for (short i = 0; i < cols; i++)
       {
           Sum += arr[rowNumber][i] ;
       }
       
        return Sum ;

}


void PrintEachRowsSumInMatrix(int arr[3][3],int rows,int cols)
{

 cout << "\nThe the following are the sum of each row in the matrix:\n";
    for (short i = 0; i < rows; i++)
    {
       cout<<"    Row     "<<i+1  <<" Sum = " << RowSum(arr,i,cols) <<endl ;
    }
    
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int arr[3][3]  ;



FillMatrixWithRandomNumber(arr,3,3)  ;
           PrintMatrixWithRandomNumber          (arr,3,3)  ;


PrintEachRowsSumInMatrix(arr,3,3)  ;








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
