#include <iostream>

using namespace std ;

enum Gender {Male,Female} ;


struct stAddress {
   string Location ;
   string Street ;
   string Number ;
   string City ;
} ;

 struct stContactInfo {
    string Email ;
    string Phone ;
    string Fax ;
    string Website ;


 };
 struct stSocialMedia {
   string Facebook ;
   string Twitter ;
   string Instagram ;
} ;
struct stEducation {
 string School ;
 string Course ;
 string Year ;
} ;
struct stPerson {
    string Name ;
    int Age ;
   Gender Gender ;
    stAddress Address ;
    stEducation Education ;
    stContactInfo ContactInfo ;
    stSocialMedia SocialMedia ;
} ;





int main() {


  stPerson Nader ;
  Nader.Name = "Nader Chargui" ;
  Nader.Age = 30 ;
  Nader.Address.Location = "Tunisia" ;
  Nader.Address.Street = "Rue de la République" ;
  Nader.Address.Number = "12" ;
  Nader.Address.City = "Tunis" ;
  Nader.Education.School = "Lycée International" ;
  Nader.Education.Course = "Ingénieur en Informatique" ;
  Nader.Education.Year = "2019" ;
  Nader.ContactInfo.Email = "nader@example.com" ;
  Nader.ContactInfo.Phone = "0654789123" ;
  Nader.ContactInfo.Fax = "0654789124" ;
  Nader.ContactInfo.Website = "nader.example.com" ;
  Nader.SocialMedia.Facebook = "naderchargui" ;
  Nader.SocialMedia.Twitter = "naderchargui" ;
  Nader.SocialMedia.Instagram = "naderchargui" ;
  

    
    
    cout << "Name : " << Nader.Name << endl ;
    cout << "Age : " << Nader.Age << endl ;
    cout << "Address : " << Nader.Address.Location << ", " << Nader.Address.Street << " " << Nader.Address.Number << ", " << Nader.Address.City << endl ;
    cout << "Education : " << Nader.Education.School << ", " << Nader.Education.Course << ", " << Nader.Education.Year << ", " << endl;

    return 0;
}
