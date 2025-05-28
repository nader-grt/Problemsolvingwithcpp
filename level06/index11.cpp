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




void FillMatrix(int matrix[3][3] ,short rows, short cols)
{

             for (short  i = 0; i < rows; i++)
             {
               for (short j = 0; j < cols; j++)
               {
                matrix[i][j] = MyLib::RandomNumber(1,10) ;
               }
               
             }
             

}





void PrintMatrix(int matrix[3][3] ,short rows, short cols)
{

         
             for (short  i = 0; i < rows; i++)
             {
               for (short j = 0; j < cols; j++)
               {

                printf("\t %0*d ",2, matrix[i][j])  ;

               }
                cout<<"\n \n" ; 
             }

}

    

void PrintMiddleCol(int matrix[3][3] ,short rows, short cols)
{
           
             for (short  i = 0; i < rows; i++)
             {
               for (short j = 0; j < cols; j++)
               {

                 if (j == 1)
                      {
                          printf("\t %0*d ",2, matrix[i][j])  ;
                          continue;
                      }

               }
                cout<<"\n \n" ; 
             }

}


void PrintMiddleRow(int matrix[3][3] ,short rows, short cols)
{
         
             for (short  i = 0; i < rows; i++)
             {
               for (short j = 0; j < cols; j++)
               {

                      if (i == 1)
                      {
                          printf("\t %0*d ",2, matrix[i][j])  ;
                          continue;
                      }

               }
                cout<<"\n \n" ; 
             }

}









int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int arr[3][3]  ;

FillMatrix(arr,3,3)  ;
cout<<"\n Matrix is : \n \n " ;
PrintMatrix(arr,3,3)  ;

cout<<"\n \n Middle Row of  Matrix is : \n \n \n \n" ;
           PrintMiddleRow(arr,3,3)  ;


cout<<"\n \n Middle Col of  Matrix is : \n \n \n \n" ;
           PrintMiddleCol(arr,3,3)  ;











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
