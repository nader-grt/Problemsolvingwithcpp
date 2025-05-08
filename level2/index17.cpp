#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
int arr[100] ;
  void ReadArray(int arr[100] , short &length)
  {
     for (short i = 0; i < length; i++)
     {
        cout<<"Enter the elemment "<<i +1 <<endl ;
        cin>>arr[i]  ;
     }
     
  }

    void PrintArray(int arr[100] , short &length)
  {
    cout<<"List of Array All elements \n"  ;
      for (short i = 0; i < length; i++)
     {
        
     }
  }
  short   LowestNumberInArray(int arr[100] , short length)
  {
    short lowestNbr = arr[0] ;
     for (short i = 0; i < length; i++)
     {
        if(arr[i] < lowestNbr )
        {
         lowestNbr = arr[i] ;
        }
     }
   return lowestNbr ;
  }

int main() {
   cout<<"======================================================================\n";
   cout<<"===                 Lowest Number In Array App                    ====\n"                              ;
   cout<<"======================================================================\n";
  short length = 4 ;
ReadArray(arr,length)  ;
cout<<"The lowest number is \t"<<LowestNumberInArray(arr,length)  ;
     cout<<"\n" ;
    return 0;
}
