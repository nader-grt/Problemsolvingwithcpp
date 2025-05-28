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



   void FillMatrix(int arr[3][3] ,short rows , short cols)
   {
              int count = 0 ;
        for (short i = 0; i < rows; i++)
        {
             for (short j = 0; j < cols; j++)
             {
                count++ ;
                arr[i][j]  = count ;
             }
             
        }
        
   }

      void PrintMatrix(int arr[3][3] ,short rows , short cols)
   {
             
        for (short i = 0; i < rows; i++)
        {
             for (short j = 0; j < cols; j++)
             {
               
                 cout<< arr[i][j] <<"   " ;
             }
             cout<<" \n \n" ;

        }
        
   }


   void ReversedMatrix(int Number,short colNumber,short rowNumber,int arrNew[3][3])
   {
         for (short i = 0; i < 3; i++)
         {
            arrNew[colNumber][rowNumber]    = Number ;
            
         }
         

   }
   void TransposeArray(int arr[3][3] ,short rows,short cols ,int arrNew[3][3])
   {
            for (short i = 0; i < rows; i++)
        {
             for (short j = 0; j < cols; j++)
             {
               
                 ReversedMatrix(arr[i][j] ,j ,i ,arrNew)  ;
             }
             cout<<" \n \n" ;

        }

   }





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int arr[3][3]    ;

int arrNew[3][3]  ;

FillMatrix(arr,3,3)  ;

cout<<"\n The Result one (1) is  : \n"   ;
PrintMatrix(arr,3,3)  ;


TransposeArray(arr,3,3,arrNew)  ;


cout<<"\n The Result two (2) is  : \n"   ;
PrintMatrix(arrNew,3,3)  ;






   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
