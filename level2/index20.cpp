#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
 
enum enCountryChoice { Jordan=1, Tunisa=2, Algeria=3, Oman=4, Egypt=5, Iraq=6, Other=7 };

void PrintGrade(int &Grade)
{
    if(Grade >=90  &&  Grade <=100)
    {
   cout<<"A \n" ;
    }else if (Grade >=90  &&  Grade <=100)
    {

    }else if (Grade >=80  &&  Grade <=89)
    {
      cout<<"B \n" ; 
    }else if (Grade >=70  &&  Grade <=79)
    {
        cout<<"C \n" ;
    }else if (Grade >=60  &&  Grade <=69)
    {
        cout<<"D \n" ;
    }else if (Grade >=50  &&  Grade <=59)
    {
        cout<<"E \n" ;
    }else 
    {
        cout<<"F \n" ;
    }
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===          Training problem with if and switch case             ====\n"                              ;
   cout<<"======================================================================\n";

 cout << "****************************\n";
    cout << "Please Enter the number of your country?\n";
    cout << "(1) Jordan\n";
    cout << "(2) Tunisa\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "(7) Other\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";

    int  Country ;
    cin>>Country ;
    enCountryChoice  CountryChoice ;
    CountryChoice  =  (enCountryChoice) Country  ;
    switch (CountryChoice)
    {
    case enCountryChoice::Jordan    :
          cout << "Your country is Jordan\n";

        break;
          case enCountryChoice::Tunisa    :
          cout << "Your country is Tunisa\n";
          
        break;
           case enCountryChoice::Algeria    :
          cout << "Your country is Algeria\n";
          
        break;
           case enCountryChoice::Oman    :
          cout << "Your country is Oman\n";
          
        break;
           case enCountryChoice::Egypt    :
          cout << "Your country is Egypt\n";
          
        break;
           case enCountryChoice::Iraq    :
          cout << "Your country is Iraq\n";
          
        break;
        
    
    default:
      cout << "Your country is Other\n";
        break;
    }


int Grade  ;

cout<<"enter your grade please "<<endl ;
cin>>Grade ;
 PrintGrade(Grade)  ;
     cout<<"\n" ;
    return 0;
}
