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



       void FillMatrixWithRandomNumber(int  matrix[3][3],int rows, int cols)
       {
                for (int  i = 0; i < rows ; i++)
                {
                        for (int j = 0;j < cols ;j++)
                        {
                           matrix[i][j]  = MyLib::RandomNumber(1,100) ;
                        }
                   
                }
                

       }
   

       void PrintMatrixWithRandomNumber(int matrix[3][3] ,int rows, int cols)
       {




                for (int  i = 0; i < rows ; i++)
                {
                        for (int j = 0;j < cols ;j++)
                        {
                           printf("%0*d \t ",2,  matrix[i][j] )  ;
                        }
                   cout<<"\n"  ;
                }
                
        
       }

       int MinNumberInMatrix(int matrix[3][3],short rows,short cols)
       {
                int MinInMatrix  =  matrix[0][0]  ;

                for (short i = 0; i < rows; i++)
                {
                       for (short j = 0; j < cols; j++)
                        {
                            if(MinInMatrix > matrix[i][j])
                             MinInMatrix =  matrix[i][j]  ;
                        }
                }
                
                return MinInMatrix  ;


       }


       int MaxNumberInMatrix(int matrix[3][3],short rows,short cols)
       {
                int MaxInMatrix  =  matrix[0][0]  ;

                for (short i = 0; i < rows; i++)
                {
                       for (short j = 0; j < cols; j++)
                        {
                                  if(MaxInMatrix < matrix[i][j])
                             MaxInMatrix =  matrix[i][j]  ;
                        }
                }
                
                return MaxInMatrix  ;


       }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


    int  arr[3][3];
   // int arr2[3][3];

 

FillMatrixWithRandomNumber(arr,3,3)  ;


cout<<"\t  Matrix elments are :\t \n \n" ;
PrintMatrixWithRandomNumber(arr,3,3)  ;




printf(" \n \n Minimum Number In Matrix is Min = %0*d   " ,2 ,MinNumberInMatrix(arr,3,3) ) ;


printf("\n \n  Maxmum Number In Matrix is Max = %0*d   ",2, MaxNumberInMatrix(arr,3,3)  ) ;
  








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
