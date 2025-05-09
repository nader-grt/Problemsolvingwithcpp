#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

enum enPassFail {Pass =1 , Fail=2}  ;
int ReadMark()
{
    int Mark ;
      do
      {
        cout<<"Enter your Mark? "<<endl ;
        cin>>Mark ;
      } while (Mark <0);
      
    return Mark ;
}


enPassFail CheckMark(int Mark)
{
    if(Mark >=50)
    return enPassFail::Pass ;
    else
    return enPassFail::Fail  ;

}

void PrintMark(int Mark)
{
  if(CheckMark(Mark) == enPassFail::Pass)
  cout<<" \n You Passed"<<endl ;
  else
   cout<<" \n You Failed"<<endl ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

PrintMark(ReadMark()) ;
     cout<<"\n" ;
    return 0;
}
