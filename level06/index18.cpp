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
               matrix[i][j] = 9;
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


   bool IsFoundInDiagonal(int num,int DiagonalArray[3],short & length)
{
    for (short i = 0; i < length; i++)
    {
       if(DiagonalArray[i] == num)
       return true ;
       else
       return  false;
    }
    

    
}

void Addelements(int Number ,int DiagonalArray[3] ,short &length )
{

    length++ ;
    DiagonalArray[length -1] = Number ;
    

}



bool CheckIsIdentityMatrix(int matrix[3][3] ,int DiagonalArray[3] ,short rows,short cols ,short &length)
{
     int DiagonalElment = matrix[0][0]  ;

           for (short i = 0; i < rows; i++)
        {
            for (short j = 0; j < cols; j++)
            {

         
                if( i == j && matrix[i][j]  != DiagonalElment)
                {
                       return false ;
                }
              
                else if( i != j  &&  matrix[i][j] != 0)
                return false ;

              

            }
            
        }

        return true  ;
}


void PrintArrrayDiagonal(int DiagonalArray[3] ,short length )

{


    for (int i = 0; i < length; i++)
    {
       cout<< "     "<<DiagonalArray[i]   ;  
    }
    
}


 
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===     typical matrices all element in both matrices are equal   ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




  //int arr1[3][3]  ;

        int arr1[3][3]  = {
               {5,0,0},
               {0,5,0},
               {0,0,5}
        } ;

 int DiagonalArray[3]  ;


//  FillMatrixIdentity(arr1,3,3)  ;

 cout<<"\n Matrix  One (1) is \n \n \n"  ;
PrintMatrixIdentity(arr1,3,3)  ;

 short length = 0 ;
//CheckIsIdentityMatrix

  

   cout<<"\n \n \n \n "  ;
if(CheckIsIdentityMatrix(arr1 ,DiagonalArray,3,3 ,length))
{
   printf("\n \n Yes   : Martix is Scalar.  \n \n ")  ;
}else
   printf("\n \n No    : Martix is NOT Scalar.  \n \n ")  ;




PrintArrrayDiagonal(DiagonalArray,length)  ;


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
