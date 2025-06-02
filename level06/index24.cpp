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

using namespace std;

/**
 * Matrix layout:
 * 00  01  02
 * 10  11  12
 * 20  21  22
 */

vector<int> vNumber;


        bool IsNumberInMatrix(int Matrix1[3][3], int Number, short rows,short cols)
        {

                    short NumberCount = 0;

        for (short i = 0; i < rows; i++)
            {
                    for (short j = 0; j < cols; j++)
                    {
                    if (Matrix1[i][j] == Number)
                            {
                            return true;
                            };
                    }
            }
                      return false;
        }

int CountNumberInterstedNumberInTwoMatrix(int matrix1[3][3], int matrix2[3][3], short rows, short cols, vector<int>& vNumber)
{
    int count = 0 , Number =0 ;
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {

             Number = matrix1[i][j]  ;
            if (IsNumberInMatrix(matrix2,Number,rows,cols))
            {
                vNumber.push_back(matrix1[i][j]);
                count++;
            }
          
        }
    }
    return count;
}

void PrintNumber()
{
    for (int &number : vNumber)
    {
        printf("  %d\t", number);
    }
}

int main() {
    cout << "======================================================================\n";
    cout << "===                Training using C++ languages App               ====\n";
    cout << "======================================================================\n";

    srand((unsigned)time(NULL));

    int arr[3][3];
    int arr2[3][3];

    int size = 3;

    MyLib::FillMatrixWithRandomNumber(arr, size);
    cout << "\nGenerated 3x3 Matrix1:\n\n";
    MyLib::PrintMatrixWithRandomNumber(arr, size);

    MyLib::FillMatrixWithRandomNumber(arr2, size);
    cout << "\nGenerated 3x3 Matrix2:\n\n";
    MyLib::PrintMatrixWithRandomNumber(arr2, size);

    cout << "\n\nIntersected Numbers (Same Position in Both):\n";
    if (CountNumberInterstedNumberInTwoMatrix(arr, arr2, size, size, vNumber) > 0)
        PrintNumber();
    else
        cout << "None found.\n";

    cout << "\n\n\n\n\n\n\n\n\n\n";
    return 0;
}
