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


  void FillMatrix(int matrix[3][3] ,short rows ,short cols)
   {
        for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               matrix[i][j] = MyLib::RandomNumber(1,10)  ;
            }
            
        }
        

   }
     void PrintMatrix(int matrix[3][3] ,short rows,short cols)
   {
    
      for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               printf(" %0*d ",2,matrix[i][j]) ;
            }
            cout<<endl ;
        }
    
   }



 

   int SumOfMatrix(int matrix[3][3] ,short rows ,short cols)
   {
         int Sum  = 0 ;

        for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
                Sum  += matrix[i][j]   ;
            }
            
        }


       return Sum   ;
   }


  bool IsEqualMatrix(int matrix1[3][3] ,int matrix2[3][3] ,short rows ,short cols)
   {

    return SumOfMatrix(matrix1,rows,cols)  ==  SumOfMatrix(matrix2,rows,cols)  ;
   }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




  int arr1[3][3]  ;

 int arr2[3][3]  ;

 


FillMatrix(arr1,3,3)  ;

 cout<<"\n Matrix  One (1) is \n \n \n"  ;
PrintMatrix(arr1,3,3)  ;


FillMatrix(arr2,3,3)  ;
 cout<<"\n Matrix  One (1) is \n \n \n"  ;
PrintMatrix(arr2,3,3)  ;


         //  cout<<"\n \n Sum of Matix is"       << SumOfMatrix(arr1,3,3)  ;

      printf("\n \n Sum of Matrix is   Sum = %d ",SumOfMatrix(arr1,3,3) )  ;

      printf("\n \n Sum of Matrix is   Sum = %d ",SumOfMatrix(arr2,3,3) )  ;
   cout<<"\n \n \n \n "  ;
if(IsEqualMatrix(arr1,arr2,3,3))
{
   printf("\n \n Yes   : the  Matrix one (1) and the Matrix two (2) are Equal  \n \n ")  ;
}else
   printf("\n \n No   : the  Matrix one (1) and the Matrix two (2) are Not Equal  \n \n ")  ;







   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
