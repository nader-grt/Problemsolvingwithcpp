#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;

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
    return rand() % (To - From + 1)  + From ;
}

void FillNumberRandomWithArray(int arr[100] ,int &length)
{
       for (int i = 0; i < length; i++)
       {
        arr[i] = RandomNumber(1,100)  ;
       }
       
}

void PrintNumberRandomWithArray(int arr[100] ,int length)
{

    cout<<"\n Array 1 Elements : \n"  ;
       for (int i = 0; i < length; i++)
       {
        cout<<"  "<< arr[i]  ;
       }

       cout<<"\n \n \n" ;
}

short  FindNumberPositionInArray(int arr[100] ,int length , int &NumberSearched)
{
      for (int i = 0; i < length; i++)
      {
        if(arr[i]  == NumberSearched) 
        return i ;
      }

      return -1 ;
      
}

bool  CheckNumberInArray(int arr[100] ,int length , int NumberSearched)
{
   return FindNumberPositionInArray(arr,length,NumberSearched)  != -1 ;

}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

int arr[100]  ,length = ReadNumberPositive("\n Enter a number? ")  ,NumberSearched =0 ;

FillNumberRandomWithArray(arr,length)  ;

PrintNumberRandomWithArray(arr,length) ;

NumberSearched = ReadNumberPositive("Please enter a number to search for : ")  ;

 cout<<" \n Number you are looking for is \n" ;
 cout<<NumberSearched ; 


if(CheckNumberInArray(arr,length,NumberSearched))
cout<<"\n Yes , The number is found :) \n" ;
else
cout<<"\n No , The number is Not found :) \n" ;


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
