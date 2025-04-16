#include <iostream>
#include <cmath>

using namespace std ;

//Problem of Seconds to Days Hours Minutes Seconds 2:5:45:35  the inputs is  193 535

//    cout << "Floor of 2.3 is : " << floor(2.3) << endl;

/*
Input : 2.5
Output : 2
*/


float ReadTotalSecondPositive(string message)
{
    float nbr = 0 ;
    do
    {
     cout<<message<<endl ;
     cin>>nbr ;
    } while (nbr<0);
    
    return nbr ;
}

int main() {

   const int   secondPerDay = 24 * 60 * 60 ;
   const int  secondPerHours = 60 * 60 ;
   const int  secondPerMinute = 60 ;
  int  remainder = 0 ;
   int  totalSeconds   = 0 ;
    totalSeconds  = ReadTotalSecondPositive("Enter the number Positive please ! ")  ;

int  numberOfDays = 0 , numberOfHours =0 , numberOfMinutes =0  , numbeROfSeconds =0 ;

numberOfDays = floor(totalSeconds / secondPerDay) ;
// this is remainder  number  of hours and minutes  without days
remainder = ( totalSeconds   %  secondPerDay ) ;
numberOfHours  = floor(remainder / secondPerHours )  ;
// this is remainder  number  of seconds  and minutes  without    hours
remainder = remainder   % secondPerHours ;
numberOfMinutes  = floor( remainder / secondPerMinute) ;
//

remainder = remainder   % secondPerMinute ;
numbeROfSeconds  = remainder  ;


     cout<<"\n" ;

     cout<<numberOfDays <<":"<<numberOfHours<<":"<<numberOfMinutes<<":"<<numbeROfSeconds<<endl ;

    return 0;
}
