#include <iostream>
#include <cmath>
#include <string>

using namespace std ;


int main() {
   
     string MyString = "ABCDEFGHIJKLMNOPQRSTUVXYZ" ;

     cout<<"the length  of my string is "  <<MyString.length()<<endl ;
     string str1 = "10"  ,str2 = "20"  ;
     cout<<" \n Concatenation between two string are "<<str1  + str2  ;

cout <<"\n \n **********************************   \n \n \n"  ;

string FullName ,str_One,str_Two;
//Nader Chargui  0123456789
   cout<<"Enter please full number " ;
   getline(cin,FullName)   ;
   cout<<"Enter  the number one is ";
   getline(cin,str_One) ;
     cout<<"Enter  the number two is ";
   getline(cin,str_Two) ;
    cout<<"List of charachters are of 2  ,6 " ;
    cout<<FullName[0]  << " "<<FullName[6] <<endl ;
cout<<str_One <<" * "<<str_Two <<  " = "  <<stoi(str_One)  * stoi(str_Two)  <<endl ;
     cout<<"\n" ;
    return 0;
}
