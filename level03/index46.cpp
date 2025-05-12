#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

enum enDayOfWeek {  Sunday = 1,
  Monday = 2,
  Tuesday = 3,
  Wednesday =4,
  Thursday =5,
  Friday = 6,
  Saturday = 7}  ;

int ReadNumberInRang(string message ,int From ,int To)
{
  int Number =0 ;
  do
  {

   cout<<message<<endl ;
   cin>>Number ;
  } while (Number <=From ||  Number >= To);
  return Number ;
  
}
enDayOfWeek  ReadDayOfWeek()
{
  return (enDayOfWeek)  ReadNumberInRang("Please Enter Day Number  Sunday = 1 and Monday = 2  Tuesday = 3   Wednesday =4 Thursday =5 Friday = 6 Saturday = 7 " ,1,7)  ;
}

string GetDayOfWeek(enDayOfWeek Day)
{
  switch (Day)
  {
  case  enDayOfWeek::Sunday   :
    return "Sunday"  ;

  case  enDayOfWeek::Monday   :
    return " \n The day is Monday"  ;
     case  enDayOfWeek::Tuesday   :
    return  " \n The day is Tuesday" ;
 case  enDayOfWeek::Wednesday   :
    return  " \n The day is Wednesday" ;
 case  enDayOfWeek::Thursday   :
    return " \n The day is Thursday"  ;
 case  enDayOfWeek::Friday   :
    return  "\n The day is Friday" ;
 case  enDayOfWeek::Saturday   :
    return  "\n The day is Saturday" ;   
  
  default:
    
  }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
  cout<<GetDayOfWeek(ReadDayOfWeek())  ;



     cout<<"\n \n \n \n" ;
    return 0;
}
