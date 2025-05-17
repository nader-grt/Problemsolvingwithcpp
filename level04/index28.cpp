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
      cout<<message<<endl ;
      cin>>Number ;
    } while (Number< 0);
    
    return Number ;
}
int RandomNumber(int From ,int To)
{
    return  rand() % (To - From +1) +From ;
}
void ReadArrayRandomNumber(int arr[100] ,int &length)
{
    length  = ReadNumberPositive("\n Enter a number ")  ;
    for (int i = 0; i < length; i++)
    {
       arr[i]  = RandomNumber(1,100)  ;
    }
    
}

void PrintArrayRandomNumber(int arr[100] ,int &length)
{
   cout<<"\n Elements Array  "  ;
    for (int i = 0; i < length; i++)
    {
     cout<<"  "<<  arr[i]  ;
    }

    cout<<"\n \n \n" ;
    
}

int SumNumberInArrayRandomNumber(int arr[100] ,int &length)
{
     int Sum = 0 ;
    for (int i = 0; i < length; i++)
    {
     Sum +=arr[i]  ;
    }


    return Sum  ;

    cout<<"\n \n \n" ;
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Summation of all numbers in random               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function


int arr[100]  ,length = 0 ;
ReadArrayRandomNumber(arr,length)  ;

PrintArrayRandomNumber(arr,length) ;

cout<<" Sum  All Numbers is "<<SumNumberInArrayRandomNumber(arr,length)  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
