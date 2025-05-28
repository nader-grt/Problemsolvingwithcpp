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

                //printf(" %0*d ", 2, arr[i][j]);
                //  cout<<setw(7) <<    matrix[i][j] <<"  ";
               }
                cout<<"\n \n" ; 
             }

}




 void MultiplyMatrix(int Multiply[3][3],int matrixOne[3][3],int matrixTow[3][3] ,short rows, short cols )
 {

              for (short  i = 0; i < rows; i++)
             {
               for (short  j = 0;j < cols;j++)
               {

                   Multiply[i][j]       = matrixOne[i][j] *   matrixTow[i][j];
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


int matrixOne[3][3]  , matrixTow[3][3] , Multiply[3][3]   ;

FillMatrix( matrixOne,3,3) ;

FillMatrix(matrixTow,3,3)  ;

   cout<<"\n \n Matrix one (1) is : \t \n \n " ;
PrintMatrix( matrixOne,3,3)  ;


 cout<<"\n \n  \n Matrix two (2) is : \t \n \n " ;
                 PrintMatrix(matrixTow,3,3)  ;



MultiplyMatrix(Multiply,matrixOne,matrixTow,3,3)  ;

 cout<<"\n \n  \n  \n Multiply Matrix Result  is : \t \n \n \n " ;

PrintMatrix(Multiply,3,3)  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
