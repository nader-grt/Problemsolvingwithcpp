#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
 
 short lengthArray  = 2 ;
  string Speciality[10]  ;
 struct StUser{
       string firstName ;
    string lastName ;
     string Email ;
    string Role  ;

 } ;

 struct StInfo{
    StUser  User ;
    string StreetName ;
    string BuildingNo ;


 } ;
 struct StEmployee{
   string fName ;
   string lName ;
   string Speciality[10]  ;
   short departmentNo  ;

 };

void ReadSpecialityEmployee( string Speciality[10] )
{
for (short i = 0; i < ::lengthArray; i++)
{
   cout<<"Enter the first speciality number "<<i +1 <<endl ;
    cin.ignore(1,'\n') ;
              getline(cin,Speciality[i] )  ;
  
}


}

void PrintSpecialityEmployee( string Speciality[10] )
{

      cout<<"List of speciality section of informatique  "<<  endl ;

for (short i = 0; i < ::lengthArray; i++)
{
   
   cout<<i+1 <<"  "<<Speciality[i] <<endl ;
}


}
 void ReadInfoEmployee(StEmployee  &Employee)
 {

 
  
       cout<<"PLease Enter the f name of Employee \n" ;
       cin>>Employee.fName;  
         cout<<" \n PLease Enter the l name of Employee \n" ;
       cin>>Employee.lName;  

          cout<<" \n PLease Enter list of Speciality Employee at least 3 or 2 \n" ;
      ReadSpecialityEmployee(Speciality)  ;
           cout<<"\n PLease Enter  department  number of Employee  \n" ;
     cin>>Employee.departmentNo ;

 }

  void PrintInfoEmployee(StEmployee  &Employee)
 {
   
     cout<<" the f name of Employee \n" ;
       cout<<Employee.fName;  
         cout<<" \n  the l name of Employee \n" ;
       cout<<Employee.lName;  

          cout<<" \n list of Speciality Employee under \n" ;
      PrintSpecialityEmployee(Speciality)  ;
           cout<<" \n department  number of Employee  \n" ;
     cout<<Employee.departmentNo ;
     cout<<"\n \n \n \n ";
 }


 void  ReadInfo(StInfo  &Info)
 {

     cout <<"Please enter the first name of user  ";
     cin>>Info.User.firstName  ;

      cout <<"Please enter the last name of user   ";
     cin>>Info.User.lastName  ;
      cout <<"Please enter the email for user  ";
     cin>>Info.User.Email  ;

   cout <<"Please enter the Role for user  ";
     cin>>Info.User.Role  ;
       cout <<"Please enter the StreetName for user  ";
    //   cin.ignore(1,'\n')
       cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     cin>>Info.StreetName  ;
     getline(cin, Info.StreetName )  ;
          cout <<"Please enter the depatment number for user  ";

           cin.ignore(1,'\n') ;
              getline(cin, Info.BuildingNo  )  ;
    

 }


void  PrintInfo(StInfo  Info)
 {

    cout<<"**************************************  \n \n \n"  ;
  cout <<"\n the first name of user   this ";
     cout<<Info.User.firstName  ;

      cout <<"\n the last name of user    this ";
     cout<<Info.User.lastName  ;
      cout <<"\n the email for this user  ";
      cout<<Info.User.Email  ;

          cout <<"\n the Role for this user  ";
      cout<<Info.User.Role  ;

       cout <<" \n the StreetName for this user ";
     cout<<Info.StreetName  ;
          cout <<"\n the depatment number for this user  ";
     cout<<Info.BuildingNo  ;
    
 }

int main() {
   
     StInfo  Info ;
     StEmployee  Employee  ;
ReadInfo(Info)  ;
PrintInfo(Info)  ;


cout<<"  \n \n work with struct employee \n \n \n "  ;
ReadInfoEmployee(Employee)  ;
PrintInfoEmployee(Employee)  ;

     cout<<"\n" ;
    return 0;
}
