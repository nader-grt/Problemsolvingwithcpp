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
    short Days  ;
    short Month ;
    short Year ;
};


bool IsLeapYear(short Year)
{
      return (Year % 400 == 0 ||  (Year % 4 == 0  &&  Year % 100  != 0))  ;
}

short ReadDays(string message)
{
    short Days = 0 ;
        cout<<message<<endl ;
        cin>>Days  ;
    return Days  ;

}

short ReadMonth(string message)
{
           short Month = 1 ;
            
           
         
       
              do
              {
          cout<<message<<endl ;

            cin>> Month ;
              } while (Month > 12 ||  Month < 1);
              

       return Month ;

}



short ReadYear(string message)
{
        short Year = 0;

        cout<<message<<endl ;

        cin>>Year ;



          return Year ;

}


StDate  ReadFullDate()
{

    StDate  Date ;
    Date.Days  = ReadDays("Enter a days ?")  ;
    Date.Month = ReadMonth("Enter a month please ?")  ;
    Date.Year  = ReadYear("Enter a year please ? ")  ;

    return Date ;
}


short GetNumbersDaysInMonth(short Month , short Year)
{
    //start from zero   6 7  are 31 
      short NumbersDayInMonth[]  = {31,28,31,30,31,30,31,31,30,31,30,31}  ;

      return      (Month == 2) ? (IsLeapYear(Year) ? 29:28  )  : (NumbersDayInMonth[Month - 1])      ;
}




short GetTotalsNumbersDaysOrderInYear(StDate Date)
{
      short TotalDays = 0 ;

      for (short  i = 0; i <=  (Date.Month - 1) ; i++)
      {
           TotalDays     +=  GetNumbersDaysInMonth(i,Date.Year)  ; 
      }

      return  (TotalDays + Date.Days) ;
      
}



StDate  ConverTotalDaysToDate(short TotalDays ,StDate  Date)
{

           short NumberDayInMonth = 0 ;

           short RemainderDayInYear = TotalDays  ;

           Date.Month  = 1 ;

           while (true)
           {
                NumberDayInMonth  = GetNumbersDaysInMonth(Date.Month,Date.Year)  ;

                if(RemainderDayInYear > NumberDayInMonth)
                {
                   RemainderDayInYear -= NumberDayInMonth  ;
                   Date.Month++  ;

                }else
                {

                    Date.Days  = RemainderDayInYear  ;
                    break;
                }
           }
           


           return Date ;
}




bool IsDate1BeforeDate2(StDate Date1,StDate Date2)
{

//  return  (Date1.Year < Date2.Year) ?
//      true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false); 

    return  (Date1.Year < Date2.Year  )  ? true : (( Date1.Year ==  Date2.Year ) ? (Date1.Month < Date2.Month ? true :  (Date1.Month == Date2.Month ? Date1.Days < Date2.Days : false)):false)  ;
}

   




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


        StDate  Date1 = ReadFullDate()  ;
        StDate  Date2 =  ReadFullDate()  ;


        if(IsDate1BeforeDate2(Date1,Date2))
        {
        cout<<"Yes Date1 is less than Date2" ;
        }else
        cout <<"No Date is not less than Date2 " ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
