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

void PrintMiddleRow(int matrix[3][3] ,short rows ,short cols)
{
    int middleRow = rows / 2 ;
      
     
        
            for (short j = 0; j < cols; j++)
            {
               printf(" %0*d ",2,matrix[middleRow][j]) ;
            }
            cout<<endl ;
        
}


  void PrintMiddleCol(int matrix[3][3] ,short rows ,short cols)
  {

      int middleCol = cols / 2 ;

      
            for (short j = 0; j < cols; j++)
            {
               printf(" %0*d ",2,matrix[j][middleCol])  ;
            }
            cout<<endl ;
        
  }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

   int arr[3][3]  ;



 


FillMatrix(arr,3,3)  ;

 cout<<"\n Matrix is \n \n \n"  ;
PrintMatrix(arr,3,3)  ;

 cout<<"\n Middle Row of Matrix is \n \n"  ;
PrintMiddleRow(arr,3,3)  ;

 cout<<"\n Middle Col of Matrix is \n \n"  ;
PrintMiddleCol(arr,3,3)  ;







   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
