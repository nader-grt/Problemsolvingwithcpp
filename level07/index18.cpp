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
    short Days , Month ,Year ;
};


bool IsLeapYear(short Year)
{

    return (Year % 400  == 0 || (Year % 4 == 0 &&  Year % 100 != 0 ))  ;
}


short ReadDays(string message)
{
          short Days = 0 ;

          cout<<message <<endl ;
          cin>>Days ;

          return Days ;

}


short ReadMonth(string message)
{
    short Month  = 1 ;
                    do
                    {
                       cout<<message<<endl ;
                       cin>>Month ;
                    } while (Month > 12 || Month < 1);
                    

                    return Month ;

}



short ReadYear(string message)
{
       short Year ;
       cout<<message<<endl;
       cin>>Year ;
       return Year ;


}


StDate  ReadFullDate()
{

     StDate Date ;
     Date.Days  = ReadDays("Enter a days ?") ;
     Date.Month = ReadMonth("Enter a month ? ") ;
     Date.Year  = ReadYear("Enter a year ? ")  ;

     return Date ;

}


short GetNumbersDaysInMonth(short Month , short Year)
{

     short DaysMonth[]  = {31,28,31,30,31,30,31,31,30,31,30,31}  ;
     return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : DaysMonth[Month - 1]  ;
}


bool IsDate1BeforeDate2(StDate  Date1, StDate  Date2)
{


 //  return  (Date1.Year < Date2.Year  )  ? true : (( Date1.Year ==  Date2.Year ) ? (Date1.Month < Date2.Month ? true :  (Date1.Month == Date2.Month ? Date1.Days < Date2.Days : false)):false)  ;
  return (Date1.Year < Date2.Year) ? true : ( (Date1.Year ==  Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Days < Date2.Days : false)) :false) ;
}


bool IsALastDayInMonth(StDate Date)
{

         return Date.Days  == GetNumbersDaysInMonth(Date.Month,Date.Year)  ;
}

bool IsALastMonthInYear(short Month)
{

    return Month == 12  ;
}




short  GetNumbersTotalDaysOrderInYear(StDate Date)
{
         short TotalDaysOrderInYear  = 0  ;


               for (short  i = 1; i <=  (Date.Month - 1); i++)
               {
                 TotalDaysOrderInYear   += GetNumbersDaysInMonth(Date.Month,Date.Year)  ; 
               }
               


         return (TotalDaysOrderInYear  +  Date.Days)  ;

}




StDate IncreaseDateByOneDay(StDate Date)
{

     //    StDate Date  ;

         if(IsALastDayInMonth(Date))
         {

                    if(IsALastMonthInYear(Date.Month))
                    {
                        Date.Days  = 1 ;
                        Date.Month = 1 ;
                        Date.Year++ ;
                    }else
                    {
                        Date.Days = 1 ;
                        Date.Month++ ;
                    }





         }else
         {

             Date.Days++  ;





         }


         return Date ;


}







StDate  ConvertNumberTotalDaysToDate(short TotalDays,StDate Date)
{
             short RemainderDaysInYear   = TotalDays   ;
             short NumbersDayInMonth = 0    ;

    //   StDate  Date  ;
       Date.Month  =0  ;

         while (true)
         {
               NumbersDayInMonth  = GetNumbersDaysInMonth(Date.Month,Date.Year)   ;

               if(RemainderDaysInYear > NumbersDayInMonth)
               {
                      RemainderDaysInYear -=  NumbersDayInMonth ;
                      Date.Month++  ;

                    


               }else
               {

                 Date.Days = RemainderDaysInYear  ;
                 break;
               }
         }
         


     return  Date  ;
}



int GetDifferenceBetweenDates(StDate Date1 , StDate Date2 ,bool IncludeEnDay = false)
{
     int Days  = 0 ;

         while (IsDate1BeforeDate2(Date1,Date2))
         {
              

                 Days++ ;
                 Date1 = IncreaseDateByOneDay(Date1) ;
               
         }
         

     return IncludeEnDay ? ++Days : Days ;
}













int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



           StDate  Date1    = ReadFullDate()  ;
           StDate  Date2    = ReadFullDate()  ;
           int TotalDaysDifference  = GetDifferenceBetweenDates(Date1,Date2)  ;
             int TotalDaysDifferenceIncludeEndDay  = GetDifferenceBetweenDates(Date1,Date2,true)  ;

           printf("\n  Diffrence Days Betweent Date1  and Date2 TotalDaysDifference = %d    Days ",TotalDaysDifference) ;

               printf("\n \n Diffrence Days Betweent Date1  and Date2 (include End Day) TotalDaysDifference = %d Days ",TotalDaysDifferenceIncludeEndDay) ;

                //    if(IsDate1BeforeDate2(Date1,Date2))
                //    {
                //     cout<<"Yes Date1 is less than Date2 "  ;
                //    }else
                //    {
                //     cout<<"No "  ;
                //    }














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
