#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;

int ReadNumberPositive(string message)
{
    int Number =0 ;
      do
      {
        cout<<message <<endl ;
        cin>>Number ;
      } while (Number < 0);
      
    return Number ;
}

int RandomNumber(int From ,int To)
{
    return rand()  % (To - From +1) +From ;
}

void FillArrayWthRandomNumber(int arr1[100] ,int & length)
{

    length  = ReadNumberPositive("\n Enter a number: ")  ;
    for (int i = 0; i < length; i++)
    {
      arr1[i]  = RandomNumber(1,100)  ;
    }
    
}

// void FillArrayTwoWithRandomNumber(int arr2[100] ,int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//       arr2[i]  = RandomNumber(1,100)  ;
//     }
    
// }

void PrintArrayWithRandomNumber(int arr[100] ,int length)
{
    for (int i = 0; i < length; i++)
    {
      cout <<"  "<<     arr[i] ;
    }
    
}

void SumTwoArrayWithRandomArray(int arr1[100] ,int arr2[2] ,int sum[100],int length)
{

    for (int i = 0; i < length; i++)
    {
       sum[i] = (arr1[i]  + arr2[i])  ;
    }
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function
int arr1[100] , arr2[100] , length ,sum[100] ;



FillArrayWthRandomNumber(arr1 ,length)  ;
FillArrayWithRandomNumber(arr2 ,length)  ;

cout<<"\n Array 1 Elments is "  ;
PrintArrayWithRandomNumber(arr1 ,length)  ;

cout<<"\n Array 2 Elments is "  ;

PrintArrayWithRandomNumber(arr2 ,length)  ;



SumTwoArrayWithRandomArray(arr1,arr2,sum,length)   ;

cout<<"\n Sum ofArray 1 and Array 2 Elments is "  ;

PrintArrayWithRandomNumber(sum ,length)  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
