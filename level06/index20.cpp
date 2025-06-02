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
  struct stCountNumber {
   short countZero = 0 ;
   short countDifferentZero = 0 ;
  };

 int   Number  = 0 ;

  void FillMatrix(int matrix[3][3] ,short rows ,short cols)
   {
        for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               matrix[i][j] = MyLib::RandomNumber(0,1)  ;
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


     void FillMatrixTwo(int matrix[3][3] ,short rows ,short cols)
   {
        for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               matrix[i][j] = MyLib::RandomNumber(0,30)  ;
            }
            
        }
        

   }
     void PrintMatrixTwo(int matrix[3][3] ,short rows,short cols)
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



stCountNumber CountNumberInMatrix(int matrix[3][3],short rows,short cols,stCountNumber   &CountNumber )
{

  //  Number = MyLib::ReadNumber("\n Enter the number you want to count? ") ;
  


               for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               if( matrix[i][j] == 0) CountNumber.countZero++ ;
               else if( matrix[i][j] != 0) CountNumber.countDifferentZero++ ;
            }
            cout<<endl ;
        }

        return CountNumber ;
}

 

  

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




  int arr1[3][3]  ;


  int arr2[3][3]  ;
 
stCountNumber   CountNumberZero ,CountNumberNonZero ;

FillMatrix(arr1,3,3)  ;

 cout<<"\n Matrix  One (1) is \n \n \n"  ;
PrintMatrix(arr1,3,3)  ;
  


FillMatrixTwo(arr2,3,3)  ;

 cout<<"\n Matrix  two (2) is \n \n \n"  ;
PrintMatrixTwo(arr2,3,3)  ;



CountNumberZero  = CountNumberInMatrix(arr1,3,3,  CountNumberZero )  ;

if(CountNumberZero.countZero > CountNumberZero.countDifferentZero)
cout<<"\n Yes : Matrix one (1) it is Sparce                \n\n " ;
else
cout<<"\n No : Matrix one (1) it is Not Sparce                \n\n " ;

CountNumberNonZero  = CountNumberInMatrix(arr2,3,3,  CountNumberNonZero )  ;



if(CountNumberNonZero.countZero > CountNumberNonZero.countDifferentZero)
cout<<"\n Yes : Matrix two (2) it is Sparce                \n\n " ;
else
cout<<"\n No : Matrix two (2) it is Not Sparce                \n\n " ;


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
