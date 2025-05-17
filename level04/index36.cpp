
#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;

struct StSearchedInArray  {
     int arr[100]  ,position , order ,length ;
     string MessageIsNumberNotFounded = "\n The Number is Not found " ;
     string DisplayMessage = "\n Number you are looking for is :  "  ;

}  ;

int ReadNumberPositive(string message)
{

    int Number = 0 ;
      do
      {
       cout<<message<<endl ;
       cin>>Number ;
      } while (Number <= 0);
      
    return Number ;
}

int RandomNumber(int From ,int To)
{

    return  rand() % (To - From + 1 )  +From    ;
}


StSearchedInArray FillNumberRandomInArray( StSearchedInArray  &SearchedInArray  , int length )
{

  

SearchedInArray.length  = length ;
    for (int i = 0; i < length; i++)
    {
      SearchedInArray.arr[i]  =  RandomNumber(1,100)      ;
    }
         return SearchedInArray     ;
}


void PrintNumberRandomInArray(    StSearchedInArray  SearchedInArray , int length)
{
    cout<<"\n Array  1   Elments : "  ;


    // StSearchedInArray  SearchedInArray  ;

    //                   SearchedInArray       = FillNumberRandomInArray(length)  ;
    for (int i = 0; i < SearchedInArray.length; i++)
    {
        cout<<"  "<<SearchedInArray.arr[i]      ;
    }
    
}


StSearchedInArray FoundedNumberWithRandomArray( StSearchedInArray  &SearchedInArray ,int NumberSearched )
{

             for (int i = 0; i < SearchedInArray.length; i++)
             {
                 if(SearchedInArray.arr[i]  == NumberSearched )
                 {
                     SearchedInArray.position  = i ;
                     SearchedInArray.order  =  SearchedInArray.position  +1 ;

                 }
             }
             return SearchedInArray ;
}


// other solution using   this is function  the owner Mohamed Abu-Hadhoud Not me 
// Function: FindNumberPositionInArray
// Purpose: Searches for a given number in an array and returns its index if found,
//          or -1 if the number does not exist in the array.
// Parameters:
//   - Number: The number to search for.
//   - arr: The array in which to search.
//   - arrLength: The number of elements in the array.
// Returns: The index (0-based) of the number if found, or -1 if not found.
short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    // Loop through each element in the array.
    for (int i = 0; i < arrLength; i++)
    {
        // Check if the current element equals the searched number.
        if (arr[i] == Number)
            return i; // Return the index immediately when the number is found.
    }
    
    // If the loop completes without finding the number, return -1.
    return -1;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

int arr[100] ,length = ReadNumberPositive("\n Enter a number ") ,NumberSearched = 0 ;
 StSearchedInArray  SearchedInArray  ;

FillNumberRandomInArray(   SearchedInArray  , length)  ;

PrintNumberRandomInArray(SearchedInArray,length)  ;

NumberSearched  =  ReadNumberPositive("\n Enter the number Do You Want to search PLZ? ")  ;
          SearchedInArray          = FoundedNumberWithRandomArray(SearchedInArray ,NumberSearched)  ;

cout<<SearchedInArray.DisplayMessage << NumberSearched <<endl  ;

  if(SearchedInArray.order >0)
  {
   cout<<"\n The Number found at position : " <<SearchedInArray.position  <<endl ;
  cout<<"\n The number found its order : " <<SearchedInArray.order  <<endl ;

  }else
  cout<< SearchedInArray.MessageIsNumberNotFounded  ;  








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
