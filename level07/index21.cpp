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
    short Day ,Month ,Year ;
};

bool IsLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))   ;
}



short ReadDay(string message)
{
    short Day = 0 ;
       cout<<message<<endl ;
       cin>>Day ;
    return Day ;

}


short ReadMonth(string message)
{
    short Month = 1  ;

 

    do
    {
          cout<<message<<endl ;
    cin>>Month ;
    } while (Month > 12  || Month <1);

    return Month ;
    
}


short ReadYear(string message)
{

    short Year  ;
    cout<<message<<endl ;
    cin>>Year ;
    return Year  ;
}



StDate  ReadFullDate()
{
    StDate Date ;

        Date.Day  = ReadDay("Enter your Day ?")  ;
        Date.Month  = ReadMonth("Enter your Month")  ;
        Date.Year  = ReadYear("Enter your year ") ;
    return Date ;
}

short GetNumbersDaysInMonth(short Month,short Year)
{

    short DaysInMinth[]  = {31,28,31,30,31,30,31,31,30,31,30,31}  ;

    return (Month == 2) ?(IsLeapYear(Year) ? 29 :28) : DaysInMinth[Month - 1 ]  ;
}


bool IsDate1BeforeDate2(StDate Date1,StDate Date2)
{

    return (Date1.Year < Date2.Year) ? true :
    ((Date1.Year == Date2.Year) ?((Date1.Month < Date2.Month ? true : Date1.Month == Date2.Month ? Date1.Day < Date2.Day :false))  :false ) ;
}


bool IsALastDayInMonth(StDate Date)
{

         return Date.Day  == GetNumbersDaysInMonth(Date.Month,Date.Year)  ;
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
               


         return (TotalDaysOrderInYear  +  Date.Day)  ;

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

                 Date.Day = RemainderDaysInYear  ;
                 break;
               }
         }
         


     return  Date  ;
}







StDate IncreaseDateByOneDay(StDate Date)
{

     //    StDate Date  ;

         if(IsALastDayInMonth(Date))
         {

                    if(IsALastMonthInYear(Date.Month))
                    {
                        Date.Day  = 1 ;
                        Date.Month = 1 ;
                        Date.Year++ ;
                    }else
                    {
                        Date.Day = 1 ;
                        Date.Month++ ;
                    }

         }else
         {
             Date.Day++  ;
         }


         return Date ;


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











StDate IncreaseDateByXDay(short Days,StDate Date)
{

            for (short i = 1; i <= Days; i++)
            {
                Date  = IncreaseDateByOneDay(Date) ;
            }
            return Date ;
            
}


StDate IncreaseDateByOneWeek(StDate Date)
{

    for (short i = 0; i < 7; i++)
    {
        Date  = IncreaseDateByOneDay(Date) ;
    }

    return Date  ;
    
}



StDate IncreaseDateByXWeek(short week,StDate Date)
{

for (short i = 0; i < week; i++)
{
   Date = IncreaseDateByOneWeek(Date)  ;
}

return Date ;
    
}



StDate IncreaseDateByOneMonth(StDate Date)
{
       short currentDaysInMonth = 0 ;

      if(Date.Month == 12)
      {
        Date.Month = 1 ;
        Date.Year++ ;
      }else
      {
        Date.Month++ ;
      }

         currentDaysInMonth = GetNumbersDaysInMonth(Date.Month,Date.Year) ;

         //  31 1 (NumbersDays Month)   to 28 or 29 / 02

         //last check day in date should not 
         //exceed max days in the current month
         // example if date is 31/1/2022 increasing one month should not be 31/2/2022, it should// be 28/2/2022

      if(Date.Day > currentDaysInMonth)
      {
        Date.Day = currentDaysInMonth ;
      }

      return Date ;
    
}




StDate IncreaseDateByXMonth(short Month,StDate Date)
{

    for (short  i = 0; i < Month; i++)
    {
       Date = IncreaseDateByOneMonth(Date)  ;
    }
    
    return Date ;
}


StDate IncreaseDateByOneYear(StDate Date)
{

   
    Date.Year++ ;
    return Date ;
}


StDate IncreaseDateByXYear(short Year,StDate Date)
{

    for (short  i = 0; i < Year; i++)
    {
       Date = IncreaseDateByOneYear(Date);
    }
    
    return Date ;
}


StDate IncreaseDateByXYearFaster(short Year,StDate Date)
{

      Date.Year += Year ;
    
    return Date ;
}


StDate IncreaseDateByOneDecade(StDate Date)
{

      Date.Year +=  10;
    
    return Date ;
}


StDate IncreaseDateByXDecade(short Decade,StDate Date)
{




      for (short i = 0; i < Decade; i++)
      {
        Date  = IncreaseDateByOneDecade(Date)  ;
      }
      
    
    return Date ;
}

StDate IncreaseDateByXDecadeFaster(short Decade,StDate Date)
{

      Date.Year +=  Decade;
    
    return Date ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;





         StDate IncreaseDate   = ReadFullDate(); 


                   cout<<"\n\nThe Date Before any operation "<<endl ;
                      cout<<IncreaseDate.Day <<"/"<<IncreaseDate.Month <<"/"<<IncreaseDate.Year <<endl ;

                      cout<<"\n ";
             IncreaseDate  = IncreaseDateByOneDay(IncreaseDate)    ;
             cout<<"Adding one day for Date "<<endl ;
             cout<<IncreaseDate.Day <<"/"<<IncreaseDate.Month <<"/"<<IncreaseDate.Year <<endl ;

                 IncreaseDate =            IncreaseDateByXDay(5,IncreaseDate)  ;

                     cout<<"\nAdding x day in this case (5 days ) for last Result Date "<<endl ;
             cout<<IncreaseDate.Day <<"/"<<IncreaseDate.Month <<"/"<<IncreaseDate.Year <<endl ;

                                 

                             IncreaseDate  =    IncreaseDateByOneWeek(IncreaseDate) ;

                                   cout<<"Adding one Week for Date "<<endl ;
             cout<<IncreaseDate.Day <<"/"<<IncreaseDate.Month <<"/"<<IncreaseDate.Year <<endl ;
                                 

                  IncreaseDate =               IncreaseDateByXWeek(5,IncreaseDate)  ;


                                             cout<<"Adding x  Week for this case ( five week) Date "<<endl ;
             cout<<IncreaseDate.Day <<"/"<<IncreaseDate.Month <<"/"<<IncreaseDate.Year <<endl ;













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
