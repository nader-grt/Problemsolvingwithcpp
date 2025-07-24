#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;



bool  IsLeapYear(short Year)
{
       return (Year % 400 == 0  || (Year % 4 == 0 && Year % 100 != 0)) ? 29 : 28  ;
}

short OrderDayByRuleWithGregorianCalendar(short Year,short Month,short Day)
{
    short a ,y ,m ,orderDay ;

         a = ((14 - Month) / (12) ) ;
         y = Year - a ;
         m = Month + (12 * a ) - 2 ;

         orderDay = (( Day + y + (y /4) - (y /100) + (y/400) + ((31 * m) /12))) % 7 ;
         return orderDay  ;

}





short GetNumberOfDaysInMonth(short Year,short Month)
{
          if(Month > 12 || Month <1) return 0 ;
          
            int  NumberOfDays[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
          return (Month == 2 ) ? (IsLeapYear(Year) ? 29 :28) : (Month == 12 ? (NumberOfDays[Month -1]) :NumberOfDays[Month]);
}





int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
