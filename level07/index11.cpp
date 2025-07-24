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
#include "../../coursecpp/level05/LibraryOrPackage/MyLibDate.h" 


using namespace std ;





short ReadDay(string message)
{

     short Day  = 0 ;

     do
     {
      cout<<message <<endl ;
      cin>>Day ;
     } while (Day <0);

     return Day ;
     
}



short ReadMonth(string message)
{

     short Month   ;

     do
     {
      cout<<message <<endl ;
      cin>>Month ;
     } while ((Month > 12  ) || (Month < 1));

     return Month ;
     
}


short ReadYear(string message)
{

     short Year   ;

   
      cout<<message <<endl ;
      cin>>Year ;
   

     return Year ;
     
}



short TotalDayFromDate(short Day,short Month,short Year)
{
  

     short TotalDays = 0 ;


 
              for (short i = 1; i <= Month - 1 ; i++)
              {
                 TotalDays += MyLibDate::GetNumberOfDaysInMonth(Year,i) ;

               
                
              }

               //  TotalDays += Day ;
              
   return (TotalDays + Day) ;

}








int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;



      short Day = ReadDay("ENTER A DAYS PLEASE ?") ;

       short Month = ReadMonth("ENTER A MONTH PLEASE ? ") ;
        short Year = ReadYear("ENTER A YEAR PLEASE ?") ;


       printf(" TotalDays = %d ",TotalDayFromDate(Day,Month,Year))  ;














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
