#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


enum enPrimeNotPrime {Prime =1,NotPrime =2}  ;

enPrimeNotPrime  CheckPrime(int Number)
{
    int M = round(Number / 2)  ;
    for (int i = 2; i <=  M; i++)
    {
      if(Number % i == 0)
      return enPrimeNotPrime::NotPrime  ;
    }
      return enPrimeNotPrime::Prime  ;
}


// enPrimNotPrime CheckPrime(int Number)
// {
//     // Calculate M as an approximate half of Number.
//     // Using round(Number / 2) is not the most efficient method (usually sqrt(Number) is used),
//     // but it works for small values.
//     int M = round(Number / 2);
    
//     // Loop from 2 to M (inclusive) to test if any number divides Number evenly.
//     for (int Counter = 2; Counter <= M; Counter++)
//     {
//         if (Number % Counter == 0)
//             return enPrimNotPrime::NotPrime; // If divisible, Number is not prime.
//     }
    
//     // If no divisors are found, return Prime.
//     return enPrimNotPrime::Prime;
// }
// bool IsPrimeOrNotPrime( enPrimeNotPrime PrimeNotPrime,int Number)
// {

//     switch (PrimeNotPrime)
//     {
//     case  enPrimeNotPrime::Prime:
//        return   CheckPrime(Number)  ==  enPrimeNotPrime::Prime   ;
       
//        case  enPrimeNotPrime::NotPrime:
//        return   CheckPrime(Number)  ==  enPrimeNotPrime::NotPrime  ;
//     default:
//         break;
//     }
    
// }

bool IsPrimeOrNotPrime( int Number)
{

 
       return   CheckPrime(Number)  ==  enPrimeNotPrime::Prime   ;
       
     
    
}
int ReadNumberPositive(string message)
{
     int Number = 0 ;
     do
     {
       cout<<message<<endl ;
       cin>>Number ;
     } while (Number <=0);
     
    return Number ;
}

int RandomNumber(int From,int To)
{
    return rand()  % (To - From +1 )  + From ;
}

void AddElementsToArray(int Number ,int copyArr[100] , int &lengthCopyArr)
{

if(CheckPrime(Number)  ==  enPrimeNotPrime::Prime)
         {

            //cout<<"  arr [ i ]" <<arr[i]  << "  "  <<endl ;
              lengthCopyArr++ ;
   copyArr[lengthCopyArr -1] = Number ;
         }

 
}

void FillWithRandomNumber(int arr[100] ,int length)
{
    for (int i = 0; i < length; i++)
    {
       arr[i]  = RandomNumber(1,100) ;
    }
    
}

void PrintArray(int arr[100] ,int length)
{

   

    for (int i = 0; i < length; i++)
    {
       cout<<"  "<<  arr[i]   ;
    }
     cout<<" \n \n ";
}

void CopyNumberIsPrimeInArray(int arr[100] ,int copyArr[100] ,int length ,int &lengthCopyArrDestination)
{

    for (int i = 0; i < length; i++)
    {
       

            //cout<<"  arr [ i ]" <<arr[i]  << "  "  <<endl ;
             AddElementsToArray(arr[i],copyArr ,lengthCopyArrDestination)  ;
        
    }
    
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Copy prime Number                                ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function



int arr[100] , copyArr[100] , length = ReadNumberPositive("\n Enter a number ") , lengthCopyArr =0  ;

FillWithRandomNumber(arr,length)  ;
cout<<"\n Array   1 Element : "<<endl ;
PrintArray(arr,length)  ;

CopyNumberIsPrimeInArray(arr ,copyArr ,length ,lengthCopyArr)  ;

cout<<"\n Array Element with All Prime number :  "<<endl ;
PrintArray(copyArr,lengthCopyArr)  ;

   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
