#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


int  ReadNumberPositive(string message)
{
    int Number = 0 ;

      do
      {
       cout<<message <<endl ;
       cin>>Number  ;
      } while (Number <=0);
      
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


int  CountEvenNumber(int arr[100] ,int length)
{
   int CountEvenNumber  = 0 ;

  for (int i = 0; i < length; i++)
       {
          if( arr[i]  % 2  ==0) CountEvenNumber++ ;
       }
  return CountEvenNumber  ;

}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                CountEvenNumber using c++ languages            ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

int arr[100] ,length = ReadNumberPositive("\nEnter a number? ")   ;
FillNumberRandomWithArray(arr,length)  ;

PrintNumberRandomWithArray(arr,length)  ;

cout<<"\n Even Number  Count is : "<<CountEvenNumber(arr,length) <<endl ;


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
