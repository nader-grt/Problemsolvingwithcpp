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
 int   Number  = 0 ;

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
               printf("  %0*d\t",2,matrix[i][j]) ;
            }
            cout<<endl ;
        }
    
   }






int CountNumberInMatrix(int matrix[3][3],short rows,short cols )
{

    Number =0;

    int count = 0 ;

               for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               if( matrix[i][j] == Number) count++ ;
            }
            cout<<endl ;
        }

        return count ;
}

 
bool IsSparceMatix(int matrix[3][3],short rows,short cols )
{
  short SizeMatrix = rows * cols ;

  return (CountNumberInMatrix(matrix,rows,cols)  >= (SizeMatrix / 2) ) ;

}

  

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




 // int arr1[3][3]  ;

//  int arr1[3][3]   = {
//        {1,2,3},
//        {0,0,0},
//        {0,0,0}
//  } ;

 
 int arr1[3][3]   = {
       {1,2,3},
       {10,0,0},
       {1000,0,50}
 } ;

//FillMatrix(arr1,3,3)  ;

 cout<<"\n Matrix  One (1) is \n \n \n"  ;
PrintMatrix(arr1,3,3)  ;
 


if(   IsSparceMatix(arr1,3,3))
cout<<"\n\n Yes : It is Sparce Matrix \n" ;
else
cout<<"\n\n No : It is Not Sparce Matrix \n" ;



         //  cout<<"\n \n Sum of Matix is"       << SumOfMatrix(arr1,3,3)  ;








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
