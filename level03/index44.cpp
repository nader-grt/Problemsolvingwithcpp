#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

struct StTaskDuration {
int NumbersOfDays , NumbersOfHours , NumbersOfMinutes,NumbersOfSeconds ;
}  ;

float ReadPositiveNumber(string message)
{
    int Number = 0  ;
    do
    {
       cout<<message<<endl ;
       cin>>Number ;
    } while (Number <0);
    
    return Number ;
}
StTaskDuration  ReadTaskDuration()
{
  StTaskDuration  TaskDuration ;
  TaskDuration.NumbersOfDays = ReadPositiveNumber("\nEnter Number of Days? ") ;
  TaskDuration.NumbersOfHours =  ReadPositiveNumber("\nEnter Numbers Of Hours? ") ;
  TaskDuration.NumbersOfMinutes = ReadPositiveNumber("\nEnter Numbers Of Minutes? ") ;
  TaskDuration.NumbersOfSeconds  =  ReadPositiveNumber("\nEnter Number Of Seconds? ") ;

  return TaskDuration  ;

}
int TaskDurationInSecond(StTaskDuration TaskDuration)
{
  int TotalDurationSeconds = 0 ;
    TotalDurationSeconds += TaskDuration.NumbersOfDays * 24 * 60 * 60 ;
     TotalDurationSeconds += TaskDuration.NumbersOfHours * 60 * 60  ;
     TotalDurationSeconds += TaskDuration.NumbersOfMinutes * 60 ;
     TotalDurationSeconds += TaskDuration.NumbersOfSeconds  ;
     return TotalDurationSeconds ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

cout<<endl ;
cout<<"Task Duration In Seconds "<<TaskDurationInSecond(ReadTaskDuration())  ;
     cout<<"\n" ;
    return 0;
}
