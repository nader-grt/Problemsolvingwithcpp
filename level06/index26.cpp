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


 void FillMatrixWithRandomNumber(int  matrix[3][3],int rows, int cols)
       {
                for (int  i = 0; i < rows ; i++)
                {
                        for (int j = 0;j < cols ;j++)
                        {
                           matrix[i][j]  = MyLib::RandomNumber(1,100) ;
                        }
                   
                }
                

       }
   

       void PrintMatrixWithRandomNumber(int matrix[3][3] ,int rows, int cols)
       {




                for (int  i = 0; i < rows ; i++)
                {
                        for (int j = 0;j < cols ;j++)
                        {
                           printf("%0*d \t ",2,  matrix[i][j] )  ;
                        }
                   cout<<"\n"  ;
                }
                
        
       }

                    bool IsPalindrom(int matrix[3][3],short rows,short cols)
{



                for (int  i = 0; i < rows ; i++)
                {
                        for (int j = 0;j < cols ;j++)
                        {
                           

                         
                           if(matrix[i][j]  !=  matrix[i][cols -1 -j])
                               return false ;
                            
                        }
                 
                }

    return true ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int arr[3][3]  = {
    {1,2,1},
    {4,5,4},
    {3,5,3}
};


int arr2[3][3]  = {
    {1,2,11},
    {4,5,4},
    {3,5,13}
};



//FillMatrixWithRandomNumber(arr,3,3)  ;


cout<<"\t  Matrix elments one (1) are :\t \n \n" ;
PrintMatrixWithRandomNumber(arr,3,3)  ;



//FillMatrixWithRandomNumber(arr,3,3)  ;


cout<<"\t  Matrix elments two (2) are :\t \n \n" ;
PrintMatrixWithRandomNumber(arr2,3,3)  ;



if(IsPalindrom(arr,3,3))

printf("\n \n  Yes :  Matrix One (1) is Palindrom   ") ;
else

printf("\n \n  Maxmum Number In Matrix is Max   "  ) ;





if(IsPalindrom(arr2,3,3))

printf("\n \n  No :  Matrix Two (2) is Not Palindrom    ") ;
else

printf("\n \n  No :  Matrix Two (2) is Not Palindrom  " ) ;



   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
