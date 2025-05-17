#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;



void FiilArrayWithHardCode(int arr[100],int &arrlength)
{

     arrlength = 10;  // Set the array length to 10 elements.
      arr[0] = 10 ;
      arr[1] = 10 ;
      arr[2] = 10 ;
      arr[3] = 50 ;
      arr[4] = 50 ;
      arr[5] = 70 ;
      arr[6] = 70 ;
      arr[7] = 70 ;
      arr[8] = 70 ;
      arr[9] = 90 ;
      // cin>>arr[0] = 10 ;
      // cin>>arr[0] = 10 ;
      // cin>>arr[0] = 10 ;
}

void AddEmementsInArrayDistincts(int Number , int copyArrDisticts[100] , int & arrlength)
{
     arrlength++ ;
     copyArrDisticts[arrlength -1]  = Number ;
}

short FoundPositionInArray(int NumberSearched ,int arr[100] ,  int arrlength )
{
  for (int i = 0; i < arrlength; i++)
  {
    if(NumberSearched == arr[i])
      {

  
         return i ;
      }
  }
  return -1 ;
}

bool IsFoundNumber(int NumberSearched ,int arr[100] ,  int arrlength )
{


   return FoundPositionInArray( NumberSearched  , arr , arrlength) != -1 ;


}

void PrintArray(int arr[100], int length)
{
  for (int i = 0; i < length; i++)
  {
    cout<< "  "<<arr[i]  ;
  }
  cout<<endl ;
}

void CopyDistinctsArray(int arr[100] , int copyArrDisticts[100] ,int arrlength, int &lengthArrDistincts)
{

  
  for (int i = 0; i < arrlength; i++)
  {
    if (!IsFoundNumber( arr[i], copyArrDisticts, lengthArrDistincts ))
        {
            
            AddEmementsInArrayDistincts(arr[i], copyArrDisticts, lengthArrDistincts);
        }
  }
  

 
   
}






int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function
   int arrSource[100]  ,arrlength   ,  destinationArr[100] , lengthArrDistincts ;

FiilArrayWithHardCode(arrSource ,arrlength) ;



cout<<"\n arrSourceay 1 Elements : " ;
PrintArray(arrSource ,arrlength) ;


CopyDistinctsArray(arrSource,destinationArr,arrlength,lengthArrDistincts)  ;

cout<<"\n Array 2 distincts  Elements : " ;

PrintArray(destinationArr ,lengthArrDistincts) ;



   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
