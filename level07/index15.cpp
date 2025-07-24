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




struct StDate 
{
    short Days ,Month , Year ;
} ;



bool IsLeapYear(short Year)
{

    return   (Year % 400 == 0  ||  ( Year % 4 == 0  &&  Year %  100  != 0))    ;
}



short ReadDays(string message)
{
    short Days = 0 ;

    return Days  ;
}



short ReadMonth(string message)
{

    short Month = 1 ;
       do
       {
        cout<<message <<endl ;
        cin>>Month  ;
       } while (Month > 12  || Month < 1);
       
    return Month   ;
}


short ReadYear(string message)
{

         short Year  ;
         cout<<message<<endl ;
         cin>>Year  ;
        return Year ;
}


short GetNumbersDaysInMonth(short Month,short Year)
{

       short NumbersDayInMonth[]  = {31,28,31,30,31,30,31,31,30,31,30,31} ;
       return       (Month == 2) ? (IsLeapYear(Year) ? 29:28)  : NumbersDayInMonth[Month - 1]     ;

}






StDate  ReadFullDate()
{
    StDate  Date  ;

        Date.Days  = ReadDays("Enter a days ?")  ;
        Date.Month = ReadMonth("Enter a month ? ")  ;
        Date.Year  = ReadYear("Enter a year ?") ;
    return Date ;
}







bool IsDate1EqualDate2(StDate  Date1 ,StDate  Date2)
{


         /*
         
          eturn  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
         
         */

  return     (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Days  ==  Date2.Days)         ;

}











int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


             StDate  Date1 =  ReadFullDate()  ;
             StDate  Date2 =  ReadFullDate()  ;

       if(IsDate1EqualDate2(Date1,Date2))
       {
        cout<<"Yes Date1 is Equal To Date2" ;
       }else
        cout<<"NO  Date1 is NOT Equal To Date2" ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
