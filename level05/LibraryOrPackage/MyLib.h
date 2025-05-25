#pragma once


#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;



 namespace MyLib {

    int ReadNumber(string message)
{
            int Number = 0;
            cout <<message<< endl;
            cin >> Number;
            while (cin.fail())
            {
                // user didn't input a number
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Invalid Number, Enter a valid one:" << endl;
                cin >> Number;
            }
           return Number;
}

    int RandomNumber(int From ,int To)
    {
        return rand()  % (To - From + 1) +From  ;
    }

    void FillArrayWithRandomNumber(int arr[100] ,int &length)
    {
        for (int i = 0; i < length; i++)
        {
           arr[i]  = RandomNumber(1,100)  ;
        }
        
    }

    void PrintArray(int arr[100] ,int length)
    {
             for (int i = 0; i < length; i++)
        {
          cout<<"   " << arr[i]   ;
        }

    }
 }