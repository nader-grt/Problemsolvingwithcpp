#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;
enum enCountryChoice { Jordan=1, Tunisa=2, Algeria=3, Oman=4, Egypt=5, Iraq=6, Other=7 };

// #4 #8 #21 #49
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training if condion  App               ====\n"                              ;
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

    int Country ;
    cin>>Country ;
    enCountryChoice countryChoice ;
    countryChoice  =  (enCountryChoice) Country  ;
 if (countryChoice == enCountryChoice::Jordan)
    {
        cout << "Your country is Jordan\n";

    }
    else if (countryChoice == enCountryChoice::Tunisa)
    {
        cout << "Your country is Tunisa\n";
    }
    else if (countryChoice == enCountryChoice::Algeria)
    {
        cout << "Your country is Algeria\n";
    }
    else if (countryChoice == enCountryChoice::Oman)
    {
        cout << "Your country is Oman\n";
    }
    else if (countryChoice == enCountryChoice::Egypt)
    {
        cout << "Your country is Egypt\n";
    }
    else if (countryChoice == enCountryChoice::Iraq)
    {
        cout << "Your country is Iraq\n";
    }
    else
        
    {
    
        cout << "Your country is Other\n";
    };


     cout<<"\n" ;
    return 0;
}


























