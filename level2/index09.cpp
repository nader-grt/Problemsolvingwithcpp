#include <iostream>
#include <cmath>
#include <string>
using namespace std ;

enum EnGender  { Male,Female} ;
enum EnStatus  {Single , Married}  ;
struct  StAddrress 
{
     float BuildingNumber ;
     float StreetNumber ;
     float ZipCode ;

} ;

struct  StContactInfo {
    string PhoneFix ;
    string email ;
    string Mobile ;
    StAddrress Address ;
}  ;

struct StPerson {
    string Fname ;
    string Lname ;
    StContactInfo  ContactInfo ;
    EnGender  Gender ;
    EnStatus  Status ;


}  ;

int main() {
   
     StPerson  Person1   ;
     EnGender Gender ;
     EnStatus  Status ;
     Gender  =  EnGender::Male   ;
    Status  = EnStatus::Single  ;
     Person1.Fname  = "Nader"  ;
     Person1.Lname   = "Chargui"  ;
     Person1.ContactInfo.email = "nader@gmail.com"  ;
     Person1.ContactInfo.Mobile  ="+21695120814"  ;
     Person1.ContactInfo.PhoneFix = "+77120814" ;
     Person1.ContactInfo.Address.BuildingNumber = 92 ;
     Person1.ContactInfo.Address.StreetNumber  =  1205;
     Person1.ContactInfo.Address.ZipCode  = 2050 ;
     Person1.Gender =Gender ;
     Person1.Status = Status  ;
     cout<<"*******************************\n"  ;

cout<<"The full name  of this person is "<< Person1.Fname  + "  "  + Person1.Lname  <<endl ;
cout<<"The  email  of this person is "<< Person1.ContactInfo.email  + "  " <<endl ;
cout<<"The mobile number   of this person is "<< Person1.ContactInfo.Mobile  + "  "   <<endl ;
cout<<"The phone fix  number   of this person is "<< Person1.ContactInfo.PhoneFix  + "  "  <<endl ;
cout<<"The building home    of this person is "<< Person1.ContactInfo.Address.BuildingNumber   <<endl ;
cout<<"The   Street number    of this person is "<< Person1.ContactInfo.Address.StreetNumber <<endl ;
cout<<"The Zipe code  number   of this person is "<< Person1.ContactInfo.Address.ZipCode  <<endl ;
cout<<"The Gender  of this person is "<<  Gender   <<endl ;
cout<<"The Status  Socila     of this person is "<<   Status   <<endl ;

      cout<<"*******************************\n"  ;

     cout<<"\n" ;
    return 0;
}
