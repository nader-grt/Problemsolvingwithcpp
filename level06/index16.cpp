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


  void FillMatrixIdentity(int matrix[3][3] ,short rows ,short cols)
   {
        for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {

               if(i  ==  j)
               matrix[i][j] = 1 ;
               else
                 matrix[i][j] = 0 ;
            }
            
        }
        

   }
     void PrintMatrixIdentity(int matrix[3][3] ,short rows,short cols)
   {
    
      for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               printf(" %d ",matrix[i][j]) ;

            }
            cout<<endl ;
        }
    
   }

   bool CheckDiagonalIs_1(int matrix[3][3] ,short rows,short cols,short d1,short d2)
   {
                      bool isDiagonale = true ;
                    for (short i = 0; i < rows; i++)
        {

          for (short j = 0; j < cols; j++)
            {
                  if(matrix[d1][d2] != 1)
                  {

                       isDiagonale = false ;
                break;
                  }

            }
         
         
            
        }


        return isDiagonale ; 
   }

      bool CheckNotDiagonalIs_0(int matrix[3][3] ,short rows,short cols,short d1,short d2)
   {
       bool IsNoDiagonale = true ;
                     for (short i = 0; i < rows; i++)
        {
           

                for (short j = 0; j < cols; j++)
            {
                  if(matrix[d1][d2] != 0)
                  {

                       IsNoDiagonale = false ;
                break;
                  }

            }
            
        }
            
        return    IsNoDiagonale ;
      
   }

bool CheckIsIdentityMatrix(int matrix[3][3] ,short rows,short cols)
{
     bool isIdentity = true ;

           for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {

              if ( (!CheckDiagonalIs_1(matrix,rows,cols,i,j)))
                {

              if ( (!CheckNotDiagonalIs_0(matrix,rows,cols,i,j)  ))
                     
                     isIdentity = false ;
                  
                }


              

            }
            
        }

        return isIdentity  ;
}



 
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===     typical matrices all element in both matrices are equal   ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




  int arr1[3][3]  ;



 


FillMatrixIdentity(arr1,3,3)  ;

 cout<<"\n Matrix  One (1) is \n \n \n"  ;
PrintMatrixIdentity(arr1,3,3)  ;


//CheckIsIdentityMatrix

  

   cout<<"\n \n \n \n "  ;
if(CheckIsIdentityMatrix(arr1,3,3))
{
   printf("\n \n Yes   : Martix is Identity.  \n \n ")  ;
}else
   printf("\n \n No    : Martix is NOT Identity.  \n \n ")  ;






   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
