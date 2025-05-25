#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
using namespace std ;


void FillArrayWitHardCoe(int SourceArr[100] ,int &SourceLength)
{
  SourceLength = 5 ;
  SourceArr[0]  = 10 ;
    SourceArr[1]  = 20 ;
      SourceArr[2]  = 30;
        SourceArr[3]  = 20 ;
          SourceArr[4]  = 10 ;



}


void PrintArray(int  SourceArr[100] ,int SourceLength)
{
  for (int  i = 0; i < SourceLength; i++)
  {
    cout<<"   "<<SourceArr[i]  ;
  }
  cout<<"\n"  ;
}

bool IsPalindromArray(int  SourceArr[100] ,int SourceLength)
{

  for (int  i = 0; i < SourceLength; i++)
  {
      if(SourceArr[i] != SourceArr[SourceLength -1 -i]) 
      return false ;
  }
  return true ;
}







int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); // using this with rand function
int SourceArr[100] ,SourceLength  ;



FillArrayWitHardCoe(SourceArr,SourceLength)  ;


cout<<"\n Array 1 Elements : " ;

PrintArray(SourceArr,SourceLength)  ;

if(IsPalindromArray(SourceArr,SourceLength) )
cout<<"\n Yes it is Palindrom Array : " ;
else 
cout<<"\n No it is NOT  Palindrom Array : " ;






   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
