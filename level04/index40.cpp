#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;

enum enEvenOrOdd {Even =1 ,Odd =2}  ;
int ReadNumberPositive(string message)
{
    int Number =0 ;

      do
      {
        cout<<message <<endl ;
        cin>>Number ;
      } while (Number <=0);
      
    return Number  ;
}

enEvenOrOdd checkNumberIsEvenOrOdd(int Number)
{
    if(Number % 2 == 0)
    return    enEvenOrOdd::Even ;
    else 
    return    enEvenOrOdd::Odd ;
}

bool IsEvenOrOdd(enEvenOrOdd EvenOrOdd ,int Number)
{

    switch (EvenOrOdd)
    {
    case enEvenOrOdd::Odd:
       return checkNumberIsEvenOrOdd(Number) ==  enEvenOrOdd::Odd ;
    
      case enEvenOrOdd::Even:
       return checkNumberIsEvenOrOdd(Number) ==  enEvenOrOdd::Even ;
       
    default:
        break;
    }
  //  return checkNumberIsEvenOrOdd(Number) ==  enEvenOrOdd::Odd ;
}

void AddElementToArray(int Number , int copyArr[100] ,int & copylength )
{

   

    if(IsEvenOrOdd(enEvenOrOdd::Odd,Number) == true)
  {
       copylength++ ;
    copyArr[copylength - 1] = Number ;
  }
   
    

}
int RandomNumber(int From ,int To)
{
    return rand() % (To - From +1) + From ;
}

void FillArrayWithRandomNumber(int arr[100] ,int length)
{
    for (int i = 0; i < length; i++)
    {
       arr[i]  = RandomNumber(1,100)  ;
    }
    
}



void CopyOddNumberInArray(int arr[100] ,int copyArr[100] ,int length ,int &copylength)
{
    // for (int i = 0; i < length; i++)
    // {
    //     AddElementToArray(arr[i] ,copyArr ,copylength)  ;
    // }
  int i = 0 ;
    do
    {
      

         AddElementToArray(arr[i] ,copyArr ,copylength)  ;
         i++ ;
    } while ( i < length);
    
    
}
void PrintArray(int arr[100] , int & length)
{
   for (int i = 0; i < length; i++)
   {
    cout<<"   " <<arr[i] ;
   }
   
   cout<<"\n"  ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               Copy Odd numbers                                ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function


int arr[100] , copyArr[100] , length = ReadNumberPositive("\n Enter a number? ") , copylength =0 ;


FillArrayWithRandomNumber(arr,length)  ;

cout<<"\n Array 1 Elements "  ;
PrintArray(arr,length)  ;
CopyOddNumberInArray(arr,copyArr,length,copylength) ;
cout<<"\n Array  2 with odd numbers  "  ;

cout<<"copylength  "<<copylength <<endl ;
PrintArray(copyArr,copylength)  ;










   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
