#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;



int RadNumberPositive(string message)
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
    return rand()%(To - From + 1 ) + From ;
}

void ReadNumberRandomArray(int arr[100] ,int & length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1,100)  ;
    }
    
}

void PrintNumberRandomArray(int arr[100] ,int length)
{
    for (int i = 0; i < length; i++)
    {
         cout<<" "<<arr[i]   ;
    }
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function
int arr[100]  ,length =0 ;
length = RadNumberPositive("\n Enter a length or size of array?")  ;
ReadNumberRandomArray(arr,length)  ;

cout<<" \n Array Elements is ";
PrintNumberRandomArray(arr,length)  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
