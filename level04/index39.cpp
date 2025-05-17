#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


int ReadNumberPositive(string message)
{
    int number =0 ;
         do
         {
           cout<<message<<endl ;
           cin>>number ;
         } while (number<=0);
         
    return number ;
}

void AddElementToArray(int Number,int copyArr[100],int &lengthCopyArr)
{
    lengthCopyArr++ ;
copyArr[lengthCopyArr - 1]  =Number ;

}

int  RandomNumber(int From,int To)
{
    return rand()  % (To - From + 1)  + From ;
}

void FillArrayWithRandomNumber(int arr[100],int length)
{
    for (int i = 0; i < length; i++)
    {
       arr[i] = RandomNumber(1,100)  ;
    }
    
}


void CopyArray(int arr[100] ,int copyArr[100] ,int length ,int & lengthCopyArr)
{
     int  i = 0 ;
    do
    {

        AddElementToArray(arr[i],copyArr ,lengthCopyArr) ;
        i++  ;
       
    } while (i <= length);
    
}







void PrintArray(int arr[100] ,int length)
{

    for (int i = 0; i < length; i++)
       cout<<"  "<<arr[i]  ;

       cout<<"\n \n \n" ;
    
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function

int arr[100] , copyArr[100] , length = ReadNumberPositive("\n Enter a number ") ,  lengthCopyArr  = 0 ;


FillArrayWithRandomNumber(arr,length) ;


cout<<"\n Array 1 Elements " ;
PrintArray(arr,length)  ;

CopyArray(arr,copyArr,length,lengthCopyArr)  ;


cout<<"\n Array 2 Elements After copy " ;

PrintArray(copyArr,length)  ;


   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
