#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;

int Number = 0 ;
int ReadNumberPositive(string message)
{
    int Number =0 ;
    do
    {
       cout<<message<<endl ;
       cin>>Number ;
    } while (Number <0);

    return Number ;
    
}

int RandomNumberFromNtoN(int From ,int To)
{
    return rand()%(To -From +1 ) +From ;
}

void ReadArrayData(int arr[100] , int &length){

    cout<<"Enter element Array "<<endl ;
    for (int i = 0; i < length; i++)
    {
      cout<<" \n Elment number ["<< i + 1<<"] ";
      cin>>arr[i] ;
    }
    cout<<"\n \n" ;
     ::Number = ReadNumberPositive("\n Enter the number you want to check? ") ;


}

void PrintArrayOriginal(int arr[100] ,int length)
{
    cout<<" \n  \n Original Array is" ;
    for (int i = 0; i < length; i++)
    {
      cout<<"  "<<arr[i] ;
    }

    cout<<"\n"  ;
    
}

int RepatedElementInCount(int arr[100] ,int length)
{
    int Count  = 0;
    

    for (int i = 0; i < length; i++)
    {
       if(Number == arr[i])  Count++ ;
    }
    

    return Count ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===             Repeated Element in Array                         ====\n"                              ;
   cout<<"======================================================================\n";
  srand((unsigned)time(NULL));
int arr[100] ;
int length = ReadNumberPositive("Enter a number? ")  ;
ReadArrayData(arr ,length) ;


PrintArrayOriginal(arr ,length)  ;



cout<<::Number <<" is repeated "<<RepatedElementInCount(arr ,length) <<" time (s)"<<endl ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
