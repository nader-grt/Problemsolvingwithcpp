#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

enum EColor {red , yellow,blue ,white} ;
enum eStatus {single ,married} ;
enum EGender {Male ,Femal}  ;
enum EWeek  {Sun,Mon,Tue,Wed,Thu,Fri,Sat}  ;

struct stOwner
{
   string name ;
   string  phone ;

} ; 
struct  stCar 
{
    string model  ;
    string brand  ;
    short year  ; 
    stOwner  owner  ;
} ;

int main() {
   
stCar  MyCar1  , MyCar2 ;
MyCar1.brand = "X5" ,MyCar1.model = "BMW",MyCar1.year = 2002 ,MyCar1.owner.phone = "+21656148514",MyCar1.owner.name = "Nader Chargui" ;

MyCar2.brand = "",MyCar2.model = ""  ,MyCar2.year = 1990 ,MyCar2.owner.phone = "+21695120814" , MyCar2.owner.name = "kossay Chargui" ;
     EGender  Gender ;
     Gender = EGender::Male  ;

     cout<<"the gender is \t "<<Gender<<endl ;
     cout<<"\n" ;
    return 0;
}
