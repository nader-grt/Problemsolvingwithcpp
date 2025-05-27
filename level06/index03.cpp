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



void FillMatrixWithRandomNumber(int arr[3][3] ,int rows,int cols)
{

   for (int  i = 0; i < rows; i++)
   {
       for (int  j = 0; j < cols; j++)
       {
        arr[i][j]  = MyLib::RandomNumber(1,100)  ;
       }
       cout<<endl ;
   }
   

}



void PrintMatrixWithRandomNumber(int arr[3][3] ,int rows,int cols)
{
     cout<<"\n \n      The follwing of Matrix 3 x 3 is : \n \n \n" ;
      for (int  i = 0; i < rows; i++)
   {
       for (int  j = 0; j < cols; j++)
       {
          cout<<setw(6)<< arr[i][j] ;
       }
       cout<<endl ;
   }
    
}



void SumEachRowsInMatrixWithRandomNumber(int arr[3][3] ,int rows,int cols)
{

int Sum = 0 ;

cout<<"\n The following of the sum for each rows in Matrix is :  \n \n" ;
      for (int  i = 0; i < rows; i++)
   {
       for (int  j = 0; j < cols; j++)
       {

        Sum += arr[i][j]  ;
        
       }
       cout<<"Row "<<i+1<< " Sum = "<<Sum ;
       Sum = 0 ;
       cout<<endl ;
   }
    
}



// other method 

                int RandomNumber(int From, int To)
                {
                //Function to generate a random number
                int randNum = rand() % (To - From + 1) + From;
                return randNum;
                }


            void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
            {
                for (short i = 0; i < Rows; i++)
                {
                        for (short j = 0; j < Cols; j++)
                        {
                        arr[i][j] = RandomNumber(1, 100);
                        }
                }
            }

        void PrintMatrix(int arr[3][3], short Rows, short Cols)
        {
            for (short i = 0; i < Rows; i++)
            {
                    for (short j = 0; j < Cols; j++)
                    {
                    cout << setw(3) << arr[i][j] << " ";
                    }
            cout << "\n";
            }
        }



        int RowSum(int arr[3][3],short RowNumber, short Cols)
        {
                int Sum = 0;

                for (short j = 0; j <= Cols - 1; j++)
                {
                      Sum += arr[RowNumber][j];
                }
                
                  return Sum;
        }


        void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
        {
            cout << "\nThe the following are the sum of each row in the matrix:\n";

                for (short i = 0; i < Rows; i++)
                {

                  cout << " Row " << i + 1 << " Sum = " << RowSum(arr,i,Cols) << endl;

                }
        }

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


int arr[3][3] ;





FillMatrixWithRandomNumber(arr,3,3)  ;

PrintMatrixWithRandomNumber(arr,3,3)   ;
SumEachRowsInMatrixWithRandomNumber(arr,3,3)  ;









   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
