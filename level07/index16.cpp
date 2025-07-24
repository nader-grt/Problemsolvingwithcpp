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
    short Days,Month,Year ;
};


bool IsLeapYear(short Year)
{
    return   (Year % 400 == 0  ||  (Year % 4 == 0  && Year % 100 != 0 ))   ;
}


short GetNumbersDaysInMonth(short Month,short Year)
{
      short NumbersDayInMonth[]  = {31,28,31,30,31,30,31,31,30,31,30,31} ;

      return           (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) :NumbersDayInMonth[Month - 1]      ;
}


short ReadDays(string message)
{
    short Days ;


    return Days  ;
}


short ReadMonth(string message)
{

    short Month = 1  ;

        do
        {
            cout<<message<<endl ;
            cin>>Month   ;
        } while (Month > 12 ||  Month < 1);
        
    return Month     ;
}


short ReadYear(string message)
{
    short Year  ;
       cout<<message<<endl ;

       cin>>Year  ;
    return Year  ;
}


StDate  ReadFullDate()
{
     
     StDate  Date  ;
     Date.Days  = ReadDays("Enter a days ? ") ;
     Date.Month = ReadMonth("Enter a month ? ") ;
     Date.Year  = ReadYear("Enter a year ? ") ;

     return Date ;
}




bool IsLastDayInMonth(StDate Date)
{
       
    //    if(Date.Days >31 || Date.Days < 1) return false ;


    //    short NumbersDayInMonth = 0 ;

    //        NumbersDayInMonth  = GetNumbersDaysInMonth(Date.Month,Date.Year)  ;

    //        if(Date.Days < NumbersDayInMonth) return false  ;

    //        if(Date.Days < 31 || Date.Days < 30) return false ;
    //        if(IsLeapYear(Date.Year))
    //        {
               
    //            if(Date.Days < 29) return false  ;
    //        }

    //      return true  ;



         return (Date.Days  ==  GetNumbersDaysInMonth(Date.Month,Date.Year))
}



bool IsLastMonthInYear(short Month )
{

    return Month  == 12 ;
}







































int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



           StDate  Date1  = ReadFullDate()   ;






           if (IsLastDayInMonth(Date1))     
            cout << "\nYes, Day is Last Day in Month.";
           else      
           cout << "\nNo, Day is Not Last Day in Month.";


            if (IsLastMonthInYear(Date1.Month))
            cout << "\nYes, Month is Last Month in Year."; 
            else        
            cout << "\nNo, Month is Not Last Month in Year."; 








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
