#include <iostream>
#include <cmath>

using namespace std ;

//Problem of Seconds to Days Hours Minutes Seconds 2:5:45:35  the inputs is  193 535

//    cout << "Floor of 2.3 is : " << floor(2.3) << endl;

/*
Input : 2.5
Output : 2
*/


int ReadTotalSecondPositive(string message)
{
    int nbr = 0 ;
    do
    {
     cout<<message<<endl ;
     cin>>nbr ;
    } while (nbr<0);
    
    return nbr ;
}

int main() {

  int  secondPerDays = 24 * 60 * 60 ;
  int secondPerHours = 60 * 60 ;
   int secondPerMinutes  = 60;
 int  totalSeconds = 0  , remainder  ,numberOfDays  , numberOfHours ,numberOfMinutes , numbeROfSeconds ;

totalSeconds = ReadTotalSecondPositive("Enter the number total of seconds please !")  ;
  numberOfDays =  floor(totalSeconds / secondPerDays) ;
  remainder =  totalSeconds % secondPerDays  ;
numberOfHours = floor( remainder /  secondPerHours) ;
remainder  = remainder %  secondPerHours  ;
numberOfMinutes  =  floor( remainder / secondPerMinutes )  ;
remainder =    remainder % secondPerMinutes   ;
numbeROfSeconds  =  remainder  ;


     cout<<"\n" ;

     cout<<numberOfDays <<":"<<numberOfHours<<":"<<numberOfMinutes<<":"<<numbeROfSeconds<<endl ;

    return 0;
}
