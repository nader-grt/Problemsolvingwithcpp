#include <iostream>
#include <cmath>
#include <string>
using namespace std ;


enum EnStatus { Single, Married}  ;
enum EnGender {Male,Female}  ;
enum EnFavoriteColor {white,green,blue ,red}  ;

  struct  StAddress{
string streetName ;
short ZipeCode ;
short buildingNumber ;


  } ;
  struct StContactInfo {
    string fixPhone ;
    string mobile ;
    string email ;
    StAddress  Address ;

  } ;
  struct Person {
    string firstName ;
    string lastName ;
    StContactInfo  contactInfo ;
EnStatus  Status ;
EnGender  Gender ;
EnFavoriteColor FavoriteColor ;


  }  ;

  string favorateColorToString(EnFavoriteColor color) {

   
    switch (color) {
        case white: return "white";
        case red:   return "red";
        case green: return "green";
        default:    return "unknown";
    }
  
}
void DisplayCardInfo()
{

    Person  person ;
EnFavoriteColor  favoriteColor   ;
favoriteColor  =  EnFavoriteColor::white  ;


     cout<<"\n ************************************************ \n" ;
      person.firstName = "Nader" ;
      person.lastName  = "Chargui"  ;
      person.contactInfo.email=  "nader@nader" ;
      person.contactInfo.fixPhone  ="077120814"  ;
      person.contactInfo.mobile  = "95120814"  ;
      person.contactInfo.Address.streetName ="Ariana road of hapiness ";
      person.contactInfo.Address.buildingNumber = 120  ;
      person.contactInfo.Address.ZipeCode   = 1080 ;
      person.FavoriteColor  =favoriteColor ;
      person.Status  = EnStatus::Single  ;
      person.Gender  = EnGender::Male  ;

      cout<<"Full Name is "<<person.firstName + " " + person.lastName  << endl ;
      cout<<"the email is "<<person.contactInfo.email <<endl ;
       cout<<"The favorate color of this person is " <<favorateColorToString(favoriteColor) ;

 cout<<"\n ************************************************ \n" ;

}
 void PrintStartSquare()
 {
   cout<<"\n ************************************************ \n" ;
    cout<<"\n ************************************************ \n" ;
     cout<<"\n ************************************************ \n" ;
      cout<<"\n ************************************************ \n" ;
 }

 void PrintGreeting()
 {
   cout<<"Hi !"<<endl ;
   cout<<"I love programing ! \n \n"  ;
   cout <<"we must work using language c plus plus like "

 }
int main() {
   
          DisplayCardInfo() ;


     cout<<"\n" ;
    return 0;
}
