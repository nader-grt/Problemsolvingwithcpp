#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


// N =10 
/*
output 123  10 array 
214578935

*/
int ReadNumberPositive(string message)
{
    int Number =0 ;

    do
    {
     cout<<message<<endl ;
     cin>>Number ;
    } while (Number <=0);
    
    return Number ;
}


// Function: Swap
// Purpose: Swaps the values of two integers.
// Parameters:
//   - A: Reference to the first integer.
//   - B: Reference to the second integer.
void Swap(int& A, int& B)
{
    int Temp;    // Temporary variable to hold the value of A.
    Temp = A;    // Save the value of A in Temp.
    A = B;       // Copy the value of B into A.
    B = Temp;    // Copy the value of Temp (original A) into B.
}
int RandomNumber(int From,int To)
{
    return  rand() % (To -From +1)  +From ;
}

void FillNumberBeforeShuflleFrom1toN(int arr[100] ,int length)
{
     for (int i = 1; i <=length; i++)
     {
        arr[i]  = i ;
     }
     
     
}

void PrintNumberRandomFrom1toN(int arr[100] ,int length)
{
  
     for (int i = 1; i <=length; i++)
     {
       cout<< "   "<< arr[i]   ;
     }
     
     cout<<"\n \n \n "  ;
}

void FillNumberAfterShuflleFrom1toN(int arr[100] ,int arrshufflenumber[100],int length)
{
    //  for (int i = 1; i <=length; i++)
    //  {
    //     arrshufflenumber[i]  = arr[ RandomNumber(1,length)] ;
    //  }
    int i = 0 ;
     do
     {
         arrshufflenumber[i]  = arr[ RandomNumber(1,length)]  ;
          arrshufflenumber[i +1] =   arr[ RandomNumber(1,length)]  ;

         i++ ;
        /* code */
     } while ( arrshufflenumber[i] ==  arrshufflenumber[i +1]  ||  i <=length);
     
     
     
}
// Function: ShuffleArray
// Purpose: Randomly shuffles the elements in the array.
// Parameters:
//   - arr: The array to shuffle.
//   - arrLength: The number of elements in the array.
void ShuffleArray(int arr[100], int arrLength)
{
    // Loop through each element of the array.
    // For each iteration, swap two randomly chosen elements.
    for (int i = 0; i < arrLength; i++)
    {
        // RandomNumber(1, arrLength) generates a random number between 1 and arrLength.
        // Subtract 1 to convert it to a valid 0-based index.
        int index1 = RandomNumber(1, arrLength) - 1;
        int index2 = RandomNumber(1, arrLength) - 1;
        // Swap the elements at the two randomly chosen indices.
        Swap(arr[index1], arr[index2]);
    }
}



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function
int arr[100] , arrshufflenumber[100], length ;

length = ReadNumberPositive("\n Enter a number? ") ;

FillNumberBeforeShuflleFrom1toN(arr,length)  ;
  cout<<" \n Number Array  Before Shuflle :" ;
PrintNumberRandomFrom1toN(arr,length)  ;
FillNumberAfterShuflleFrom1toN(arr,arrshufflenumber,length)  ;

cout<<" \n Number Array  After Shuflle :"  ;
PrintNumberRandomFrom1toN(arrshufflenumber,length)  ;



   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
