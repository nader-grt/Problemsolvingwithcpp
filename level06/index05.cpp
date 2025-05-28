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


void FillMatrix(int arr[3][3],short rows,short cols)
{

    for (short i = 0; i < rows; i++)
    {
       for (short j = 0; j < cols; j++)
       {
           arr[i][j]  = MyLib::RandomNumber(1,100)  ;
       }
       
    }
    
}



void PrintMatrix(int arr[3][3],short rows,short cols)
{
  cout<<"\n \n      The follwing of Matrix 3 x 3 is : \n \n \n" ;
     for (short i = 0; i < rows; i++)
    {
       for (short j = 0; j < cols; j++)
       {
            cout<<setw(5)<<  arr[i][j]<<"      ";
       }
       cout<<"\n \n \n" ;
    }
}

int ColSum(int arr[3][3],short colNumber ,int rows)
{
         int  Sum = 0 ;

        for (short i = 0; i < rows ; i++)
        {
          Sum +=  arr[i][colNumber] ;
        }
        


    return Sum ;
}



void   PrintEachCols(int arr[3][3],short rows,short cols)
{
     cout << "\nThe the following are the sum of each col in the matrix:\n \n \n";

for (short i = 0; i < cols; i++)
{
   cout<<"\n Cols "<< i + 1 <<" Sum = "<<ColSum(arr,i,rows) <<endl ;
}


}




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




int arr[3][3]   ;



FillMatrix(arr,3,3) ;
PrintMatrix(arr,3,3)  ;


PrintEachCols(arr,3,3)  ;







   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
