#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


struct StCopyArray {
    int arr[100]  ;
    int length =10  ;
} ;
int ReadNumberPositive(string message)
{
    int Number = 0 ;
         do
         {
            cout<<message<<endl ;
            cin>>Number ;
         } while (Number <0);
         
    return Number ;
}

int RandomNumber(int From ,int To)
{

    return rand() % (To - From + 1) + From  ;
}

void FillNumberRandomInArray(int arr[100] ,int & length)
{
    length = ReadNumberPositive("Enter a Number ")  ;
    for (int i = 0; i < length; i++)
    {
       arr[i]  = RandomNumber(1,100)  ;
    }
    
}

StCopyArray CopyArrayUsingStruct(int arr[100]  ,int length)
{
    StCopyArray  CopyArray ;
CopyArray.length  =  length ;
    for (int i = 0; i < length; i++)
    {
       CopyArray.arr[i]  = arr[i]  ;
    }
    return CopyArray  ;
}


void PrintArray(int arr[100]  ,int length)
{
    cout<<"\n Array 1 Elements : " ;
  for (int i = 0; i < length; i++)
    {
       cout<<"   "<<arr[i]  ;
    }
cout<<"\n \n \n" ;

}


void PrintCopyArray(int arr[100]  ,int length)
{
      StCopyArray CopyArray  ;

        CopyArray      = CopyArrayUsingStruct(arr,length ) ;
cout<<"\n Array 2 After copy Elments :" ;
for (int i = 0; i < CopyArray.length; i++)
{
     cout<<"  "<<   CopyArray.arr[i]  ;
}
cout<<"\n \n \n" ;

}

// Other Method 

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the number of elements from the user.
    
    // Loop through indices from 0 to arrLength - 1 and fill each element with a random number.
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Function: PrintArray
// Purpose: Prints the elements of an integer array separated by spaces.
// Parameters:
//   - arr: The array to be printed.
//   - arrLength: The number of elements in the array.
void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    
    cout << "\n";  // Print a newline after printing all elements.
}

// Function: CopyArray
// Purpose: Copies the elements from the source array to the destination array.
// Parameters:
//   - arrSource: The array from which to copy elements.
//   - arrDestination: The array into which elements will be copied.
//   - arrLength: The number of elements to copy.
void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
    // Loop through each element up to arrLength and copy from source to destination.
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[i];
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                  Copy Array                                   ====\n" ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

int arr[100]  ,length ;
FillNumberRandomInArray(arr,length) ;

PrintArray(arr,length)  ;
PrintCopyArray(arr,length)  ;

/**
 * 
 *   int arr2[100];   // Declare a second array to hold the copied elements.
    
    // Copy the elements from the first array to the second array.
    CopyArray(arr, arr2, arrLength);
 */

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
