#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


int ReadNumberPositive(string message)
{
    int Number = 0;
       do
       {
        cout<<message ;
        cin>>Number ;
       } while (Number <0);
       
    return Number ;
}

int RandomNumber(int From,int To)
{
    return rand() % (To - From + 1) + From ;
}


void  FillNumberRandomInArray(int arr[100],int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1,100)  ;
    }
    
}

void  PrintNumberRandomInArray(int arr[100],int length)
{
    for (int i = 0; i < length; i++)
    {
      cout<<"  "<<  arr[i]  ;
    }
    
}
void CopyArray(int arr[100],int copyArr[100] ,int length)
{
 int Count = 0 ;
   for (int  i =  length -1 ; i >= 0; i--)
   {
   // cout<<"length " <<length  << "          "  << i <<endl ;

   //  cout<< " \n el ihy   :  "<<i <<   " Count  " << Count  <<endl ;
      copyArr[i]  = arr[Count  ]  ;
         Count+= 1   ;

        
         if(Count   >  length - 1) break;
    // do
    // {
    //     /* code */

    //      copyArr[Count]  = arr[i]  ;
    //      Count++  ;

    // } while ( Count  <= length);
    
      
   }
   
}

// Function: CopyArrayInReverseOrder
// Purpose: Copies the elements from the source array into the destination array in reverse order.
// Parameters:
//   - arrSource: The source array whose elements are to be reversed.
//   - arrDestination: The destination array where the reversed elements will be stored.
//   - arrLength: The number of elements in the source array.
void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
    // Loop through each element of the source array.
    // For each index i, copy the element at position (arrLength - 1 - i)
    // from the source array into the destination array at index i.
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[arrLength - 1 - i];
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Copy Array And Reversed Order                    ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

int arr[100], copyArr[100] , length  = ReadNumberPositive("\nEnter a number? ")  ;

FillNumberRandomInArray(arr,length)  ;

CopyArray(arr,copyArr ,length)  ;

cout<<"\n Array 1 Elements : " ;
PrintNumberRandomInArray(arr,length)  ;

cout<<"\n Array 2 Elements After Copy and reversed Order : " ;

PrintNumberRandomInArray(copyArr ,length)  ;




   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
