#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

 enum enPassFail {Pass =1 ,Fail =2} ;

 void ReadMark(int& Mark1 ,int &Mark2,int& Mark3)
 {
   cout<<"\n Enter your Number 1 :"<<endl ;
    cin>>Mark1 ;

     cout<<"\n Enter your Mark 2 :"<<endl ;
    cin>>Mark2;
     cout<<"\n Enter your Mark 3 :"<<endl ;
    cin>>Mark3 ;
}
float SumMarkTotal(int Mark1 ,int Mark2,int Mark3)
{
  return (Mark1 + Mark2 + Mark3)  ;
}

float AverageMarkTotal(int Mark1 ,int Mark2,int Mark3)
{
     return (float)  (SumMarkTotal( Mark1 , Mark2, Mark3) /3) ;
}
 enPassFail  CheckMark(float AverageMark)
 {
     if(AverageMark >=50)
      return enPassFail::Pass  ;
      else
      return enPassFail::Fail  ; 
 }

 void PrintAverageMark(float Average)
 {
  if(CheckMark(Average)  ==  enPassFail::Pass)
  cout <<"\n Passed"<<endl ;
  else
   cout <<"\n Failed"<<endl ;

 }
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
int Mark1 ,Mark2,Mark3    ;
ReadMark(Mark1 ,Mark2,Mark3)  ;

PrintAverageMark(  AverageMarkTotal(Mark1 ,Mark2,Mark3)) ;

     cout<<"\n" ;
    return 0;
}
