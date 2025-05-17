#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;
enum enPrimeNotPrimeNumber {Prime =1 ,NotPrime =2} ;


struct StCopyArrayWithPrimeNumber {
    int arr[100]  ;
    int length  =0  ;
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


enPrimeNotPrimeNumber CheckNumberPrime(int Number)
{
    int M = round(Number /2) ;

    for (int Count= 2; Count < M; Count++)
    {
        if(Number % Count ==  0)
        return enPrimeNotPrimeNumber::NotPrime ;
    }
    return enPrimeNotPrimeNumber::Prime  ;
    
}
int RandomNumber(int From ,int To)
{
    return rand() % (To - From +1)  +From ;
}


void FillArrayWithRandomNumber(int arr[100]  ,int &length)
{

    length = ReadNumberPositive("\n Enter a number")  ;
    for (int  i = 0; i < length; i++)
    {
       arr[i]  = RandomNumber(1,100)  ;
    }
    

}

void PrintArrayWithRandomNumber(int arr[100] ,int length)
{
   cout<<"\n Array 1 Elements : " ;
   for (int i = 0; i < length; i++)
   {
      cout<<"  "<<arr[i]  ;
   }
   cout<<"\n \n \n \n" ;
   

}

StCopyArrayWithPrimeNumber  CopyArrayWithOnlyPrimeNumber(int arr[100] ,int length)
{
         StCopyArrayWithPrimeNumber  stCopyArrayWithPrimeNumber ;

         stCopyArrayWithPrimeNumber.length = length ;
   for (int i = 0; i < length; i++)
   {
       if(CheckNumberPrime(arr[i])   == enPrimeNotPrimeNumber::Prime )
       stCopyArrayWithPrimeNumber.arr[i]  = arr[i]  ;
       else
       continue;
   }
   
   return stCopyArrayWithPrimeNumber  ;
}


void PrintArrayWithOnlyPrimeNumber(int arr[100] ,int length)
{
     StCopyArrayWithPrimeNumber  stCopyArrayWithPrimeNumber ;
            stCopyArrayWithPrimeNumber=          CopyArrayWithOnlyPrimeNumber(arr,length)  ;
            cout<<" \n Prime Numbers In Array : " ;
            for (int i = 0; i < stCopyArrayWithPrimeNumber.length; i++)
            {
                if(stCopyArrayWithPrimeNumber.arr[i] > 0)
               cout<<"   "<<stCopyArrayWithPrimeNumber.arr[i]  ;
            }
              cout<<"\n \n \n \n" ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Copy Only Prim Numbers                           ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function







int arr[100] ,length = 0 ;

FillArrayWithRandomNumber(arr,length)  ;
PrintArrayWithRandomNumber(arr,length)  ;



PrintArrayWithOnlyPrimeNumber(arr,length)  ;








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
