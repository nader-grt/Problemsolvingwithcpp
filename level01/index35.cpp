#include <iostream>
#include <cmath>

using namespace std ;

int ReadNumberPositive(string message)
{
    int nbr = 0 ;
    do
    {
      cout<<message<<endl ;
      cin>>nbr ;
    } while (nbr<0);
    
    return nbr ;
}


float PrintNumberDays(int nbrHours){
    float nbrdays = nbrHours / 24 ;
    return nbrdays  ;
}
float PrintNumberWeeks(int nbrDays){
  float nbrweeks = nbrDays /7 ;
  return nbrweeks ;
}
int main() {
   
int hours = ReadNumberPositive("Enter the number of hours please ! ") ;
float nbrDays= PrintNumberDays(hours)  ;  

float nbrWeeks =  PrintNumberWeeks( nbrDays)  ;

cout<<"\n he result of number of days for number hours "<<hours <<" is "<<nbrDays <<endl ;
cout<<"\n he result of number of weeks for  number hours "<<hours <<" is "<<nbrWeeks <<endl ;
     cout<<"\n" ;
    return 0;
}
