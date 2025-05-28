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


short length = 0 ;

void FillMatrix(int arr[3][3] ,short rows,short cols)
{
   for (short  i = 0; i < rows; i++)
   {
       for (short  j = 0; j < cols; j++)
       {
          arr[i][j] = MyLib::RandomNumber(1,10)  ;
       }
       
   }
   

}

void PrintMatrix(int arr[3][3] ,short rows,short cols)
{
       
         for (short  i = 0; i < rows; i++)
   {
       for (short  j = 0; j < cols; j++)
       {
        cout<<setw(6)<<arr[i][j] <<"   " ;
       }
       cout<<"\n \n " ;
       
   }

}


int ColSum(int arr[3][3] , short colNumber,short rows)
{

    int Sum = 0 ;
        for (short i = 0; i < rows; i++)
        {
            Sum += arr[i][colNumber]  ;
        }
        

    return Sum ;
}

  void AddElementInOneDimentional(int Number,int * arrNew,short &length)
   {

         length++ ;
       arrNew[length - 1]  = Number ;


   }
void PrintSumForEachColInMatrix(int arr[3][3], short rows ,short cols)
{

       cout << "\nThe the following are the sum of each col in the matrix:\n \n \n";

    for (short i = 0; i < cols; i++)
    {
       cout<<"\n Cols "<< i + 1 <<" Sum = "<<ColSum(arr,i,rows) <<endl ;
    }
    
}


void AddSumForEachColInMatrix(int arr[3][3], short rows ,short cols,int * arrNew,short &length)
{

  

    for (short i = 0; i < cols; i++)
    {

        AddElementInOneDimentional(ColSum(arr,i,rows) ,arrNew,length) ;
      
    }
    
}
   void PrintArray(int * arrNew,short length)
   {
   

       cout<<"\n \n \n  Result final are : \n \n \n \n "  ;
    for (short i = 0; i < length; i++)
    {
       cout<<arrNew[i]  <<"    " ;
    }
    
   }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;
   int arr[3][3]  ;

   int * ptr ;
      ptr = new int[length]  ;

FillMatrix(arr,3,3)  ;

PrintMatrix(arr,3,3)  ;

PrintSumForEachColInMatrix(arr,3,3)  ;

//(


AddSumForEachColInMatrix(arr,3,3,ptr,length)  ;

PrintArray(ptr,length)    ;

delete[]  ptr ;






   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
