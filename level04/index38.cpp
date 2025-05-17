#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


struct StFillDynamicArray{
    int arr[100] ,Count = 0 ;
    string DisplayMessage = "Please Enter a number yes [1} or no [0] ? "  ;
    bool IsRepeated = true ;
} ;


StFillDynamicArray FillInDynamicArray(StFillDynamicArray  &FillDynamicArray )
{
    int i = 0 ,Number = 0;
       do
       {
         cout<< FillDynamicArray.DisplayMessage <<endl ;
         cin>>FillDynamicArray.IsRepeated ;
         if(FillDynamicArray.IsRepeated == 0) break;
       cin>>Number ;
        FillDynamicArray.arr[i] = Number ;
        FillDynamicArray.Count = i + 1 ;
        i++ ;
       } while (FillDynamicArray.IsRepeated);
       
  return FillDynamicArray  ;
}

void DisplaySimiDynamicArray(StFillDynamicArray  FillDynamicArray)
{

    for (int i = 0; i < FillDynamicArray.Count; i++)
    {

        if(FillDynamicArray.Count == 0) break; 
       cout<< "   " << FillDynamicArray.arr[i]   ;
    }
    
    cout<<"\n \n \n "  ;
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function
StFillDynamicArray  FillDynamicArray ;

         FillDynamicArray=          FillInDynamicArray(FillDynamicArray)  ;

cout<<"\n Array length "  <<FillDynamicArray.Count <<endl ;

DisplaySimiDynamicArray(FillDynamicArray)  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
