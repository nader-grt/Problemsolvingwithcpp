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
               matrix[i][j] = MyLib::RandomNumber(1,100)  ;
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


bool  IsExistNumberInMatrix(int matrix[3][3] ,short rows,short cols)

{
    Number = MyLib::ReadNumber("\n Enter the number to look for in Matrix? ") ;
             
                 for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {
               if(matrix[i][j] == Number) return true ;
            }
           
        }

             return false ;

}



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int arr[3][3]  ;




FillMatrix(arr,3,3)  ;


cout<<"\n Matrix Elements are : \n \n " ;
PrintMatrix(arr,3,3)  ;



if(IsExistNumberInMatrix(arr,3,3))
cout<<"\n Number for looking is "<<Number <<  "\n Yes It is there ok";
else
cout<<"\n Number for looking is "<<Number << "\n No It is No there " ;








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
