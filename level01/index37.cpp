#include <iostream>
#include <cmath>

using namespace std ;

//Problem Of task Duration In Seconds

int ReadNumberPositive(string message)
{
    int nbr = 0 ;
       do
       {
        cout<<message<<endl ;
        cin>>nbr ;
       } while (nbr < 0);
       
    return nbr ;
}


void PrinttaskDurationInSeconds(int nbrdays,int nbrhours,int nbrMinute,int nbrseconds)
{
   float nbrTaskDurationInSecond = 0 ;
   nbrTaskDurationInSecond = (nbrdays *24 * 60 *60 ) + (nbrhours * 60 * 60 ) + (nbrMinute * 60)  +(nbrseconds)  ;
cout<<"The result of task of duration of seconds is "<<nbrTaskDurationInSecond<<endl ;




}
int main() {
   
   int nbrDayS = ReadNumberPositive("Enter the number of days please ! ") ;
      int nbrHours = ReadNumberPositive("Enter the number of hours please ! ") ;
         int nbrMinutes = ReadNumberPositive("Enter the number of Minutes please ! ") ;
            int nbrSeconds = ReadNumberPositive("Enter the number of seconds  please ! ") ;
PrinttaskDurationInSeconds(nbrDayS,nbrHours ,nbrMinutes,nbrSeconds) ;

     cout<<"\n" ;
    return 0;
}
