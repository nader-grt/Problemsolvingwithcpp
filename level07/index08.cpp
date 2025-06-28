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



 short ReadYear()
 {
      short Year ;
           
           
               cout<<"\n Enter a Year "  ;
               cin>> Year ;
         
           
      return Year ;
 }

  short ReadMonth()
 {
      short Month ;
           do
           {
           
               cout<<"\n Enter a month "  ;
               cin>> Month ;
           } while (Month < 1 ||   Month >12);
           
      return Month ;
 }

 short ReadDay()
 {
      short Day ;
           do
           {
           
               cout<<"\n Enter a Day "  ;
               cin>> Day ;
           } while (Day < 1 ||   Day >31);
           
      return Day ;
 }


string ConvertFullDateToString(short Year,short Month,short Day)
{

    return to_string(Year) + "/" + to_string(Month) + "/" + to_string(Day)  ;
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

string ConverOrderDayToNameDays(short orderDay)
{

         string nameDays[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    if (orderDay >= 0 && orderDay <= 7)
        return nameDays[orderDay];
    else
        return "Invalid Day";
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;
        short Year  = ReadYear() ;
        short Month  = ReadMonth() ;
        short  Day = ReadDay() ;
        
      string   FullDate =  ConvertFullDateToString(Year,Month,Day)  ;
      short orderDays = OrderDayByRuleWithGregorianCalendar(Year,Month,Day) ;
      string nameDays = ConverOrderDayToNameDays(orderDays)  ;



      cout<< "\n Date        \t : "<<FullDate ;
      cout<< "\n Order Days  \t : "<<orderDays ;
      cout<< "\n Name Days   \t : "<<nameDays ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
