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



void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short
Cols)
{
short Counter = 0;
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
Counter++;
arr[i][j] = Counter;
}
}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
cout << " " << arr[i][j] << " ";
}
cout << "\n";
}
}
void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short
Rows, short Cols)
{
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
arrTransposed[i][j] = arr[j][i];
}
}
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;






              int arr[3][3], arrTransposed[3][3];
FillMatrixWithOrderedNumbers(arr, 3, 3);
cout << "\nThe following is a 3x3 ordered matrix:\n";
PrintMatrix(arr, 3, 3);
TransposeMatrix(arr, arrTransposed, 3, 3);
cout << "\n\nThe following is the transposed matrix:\n";
PrintMatrix(arrTransposed, 3, 3) ;












   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
