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
               printf(" %0*d ",2,matrix[i][j]) ;
            }
            cout<<endl ;
        }
    
   }


int CountNumberInMatrix(int matrix[3][3],short rows,short cols )
{

    Number = MyLib::ReadNumber("\n Enter the number you want to count? ") ;

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

 

  

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




  int arr1[3][3]  ;



 


FillMatrix(arr1,3,3)  ;

 cout<<"\n Matrix  One (1) is \n \n \n"  ;
PrintMatrix(arr1,3,3)  ;
  int Count = CountNumberInMatrix(arr1,3,3)  ;

cout<<"The Number "<<Number << " is count in Matrix is: "<<Count  ;  


         //  cout<<"\n \n Sum of Matix is"       << SumOfMatrix(arr1,3,3)  ;








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
