#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;


enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };
  enWeekDay WeekDay  ;



void ShowWeekDayMenue()
{
    cout << "************************" << endl;
    cout << "       Week Days        " << endl;
    cout << "************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "************************" << endl;
    cout << "Please enter the number of day?" << endl;


}
enWeekDay   ReadWeekDay()
{

    int WD ;
    cin>>WD;
  

    return (enWeekDay) WD ;
}

string GetWeekDayName(enWeekDay WeekDay)
{
   switch (WeekDay)
   {
   case  enWeekDay::Mon  :
    return "Monday" ;
    break;
      case  enWeekDay::Tue  :
    return "Tuesday" ;
    break;
      case  enWeekDay::Wed  :
    return "Wenesday" ;
    break;
        case  enWeekDay::Thu  :
    return "Thursday" ;
    break;
   
        case  enWeekDay::Fri  :
    return "Friday" ;
    break;
   
        case  enWeekDay::Sat  :
    return "Saturday" ;
    break;
       case  enWeekDay::Sun  :
    return "Sunday" ;
    break;
   
   default:
    break;
   }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               week days using functionc++ languages App       ====\n"                              ;
   cout<<"======================================================================\n";

   ShowWeekDayMenue()  ;

    WeekDay  =  ReadWeekDay();
cout<<"\n Today is  "<<GetWeekDayName(WeekDay)  ;

     cout<<"\n \n \n \n" ;
    return 0;
}






































