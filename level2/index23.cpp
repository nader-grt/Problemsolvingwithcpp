#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
enum EnWeekDays { 
  
    Monday = 1,
    Tuesday  =2 ,
    Wednesday =3,
    Thursday =4,
    Friday =5,
    Saturday =6,
      Sunday = 7,
    }  ;

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
 cout << "****************************\n";
    cout << "Please Enter the number of your country?\n";
    cout << "(1) Monday\n";
    cout << "(2) Tuesday\n";
    cout << "(3) Wensday\n";
    cout << "(4) Thursday\n";
    cout << "(5) Friday\n";
    cout << "(6) Saturday\n";
    cout << "(7) Sunday\n";
    cout << "(8) Other\n";
    cout << "****************************\n\n";
    cout << "Your Days Choice? ";
int Day ;
cin>>Day ;
   EnWeekDays WeekOfDay ;
   WeekOfDay  =  (EnWeekDays)  Day ;

   switch (WeekOfDay)
   {
   case  EnWeekDays::Monday  :
      cout << "Your Day is Monday\n";
    break;
      case  EnWeekDays::Tuesday  :
     cout << "Your Day is Tuesday\n";
    break;
      case  EnWeekDays::Wednesday  :
     cout << "Your Day is Wednesday\n";
    break;
      case  EnWeekDays::Thursday  :
     cout << "Your Day is Thursday\n";
    break;
      case  EnWeekDays::Friday  :
     cout << "Your Day is Friday\n";
    break;
      case  EnWeekDays::Saturday  :
     cout << "Your Day is Saturday\n";
    break;
      case  EnWeekDays::Sunday  :
     cout << "Your Day is Sunday\n";
    break;
   
   default:
    cout << "Not Day For This Number\n";
    break;
   }

     cout<<"\n" ;
    return 0;
}
