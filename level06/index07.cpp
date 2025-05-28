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

void  FillMatrixWithOrderNumbers(int arr[3][3],short rows,short cols)
{
       int static count  = 1 ;

       for (short i = 0; i < rows; i++)
       {
             for (short j = 0; j < cols; j++)
                {
                   arr[i][j] = count++ ;
                }
                cout<<"\n \n " ;
       }
       
}


void  PrintMatrixWithOrderNumbers(int arr[3][3],short rows,short cols)
{
       

       for (short i = 0; i < rows; i++)
       {
             for (short j = 0; j < cols; j++)
                {
                   cout<<setw(5) <<   arr[i][j] <<"     " ;
                }
                 cout<<"\n \n " ;
       }
       
}



void FillMatrix(int Arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows;i++) {
		for (short j  = 0; j < Cols ; j++)
		{
			Arr[i][j] = (3* i ) + j+1 ;
		}
	}
}

void PrintMatrix(int Arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0;j < Cols;j++) {
			cout << Arr[i][j] << "\t";
		}
		cout << "\n";
	}
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;

int arr[3][3]  ;

FillMatrixWithOrderNumbers(arr,3,3)  ;

PrintMatrixWithOrderNumbers(arr,3,3)  ;




cout<<"\n The Solution two \n \n "  ;

int Arr[3][3];
	FillMatrix(Arr, 3, 3);
	PrintMatrix(Arr, 3, 3);












   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
