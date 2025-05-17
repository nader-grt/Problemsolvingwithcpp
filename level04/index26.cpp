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
        cout<<message << endl ;
        cin>>Number ;
       } while (Number <0);
       
    return Number ;
}
int RandomNumber(int From,int To)
{
    return rand() % (To - From + 1)  +From ;
}

void ReadArraryRandomNumber(int arr[100] ,int & length)
{
    length = ReadNumberPositive(" \n Enter a number? ") ;

    for (int i = 0; i < length; i++)
    {
       arr[i]  = RandomNumber(1,100)  ;
    }
    
}

void PrintArraryRandomNumber(int arr[100] ,int  length)
{
   cout<<" Array Elements : " ;

    for (int i = 0; i < length; i++)
    {
        cout<<"  "<<  arr[i]  ;
    }
    cout<<"\n \n \n" ;
}

int MaxNumberInArraryRandom(int arr[100] ,int & length)
{
   int MaxNumber = arr[0]  ;

    for (int i = 0; i < length; i++)
    {
      

       if( arr[i]  > MaxNumber)
         {
            MaxNumber = arr[i]  ;
         }

        
    }
         return  MaxNumber ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function
int arr[100]  ,length = 0 ;

ReadArraryRandomNumber(arr,length)  ;


PrintArraryRandomNumber(arr,length)  ;

cout<<" \n Max Number is " <<  MaxNumberInArraryRandom(arr,length)  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
