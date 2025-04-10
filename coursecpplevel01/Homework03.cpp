#include <iostream>
#include <string>

using namespace std ;






int main() {

string FullName ,str1,str2 ;

 cout<<"Please enter your name " <<endl ;
 getline(cin , FullName) ;

 cout<<"Please enter your string one " <<endl ;
 getline(cin , str1) ;

 cout<<"Please enter your string two" <<endl ;
 getline(cin , str2) ;

cout<<"\n**************************************************************** \n";
//Nader Chargui
cout <<"The leng of your name is: " <<FullName.length() <<endl ;
cout<<"CHARACTER of at 0 2 7 11 is: "<<FullName[0] <<"." <<FullName[2] <<"  " <<FullName[6] <<"." <<FullName[12] <<endl;
cout<<"concatenation is: " << str1 + str2 <<endl ;
cout <<str1  + " * " +  str2 <<" = " << stoi(str2) + stoi(str2) <<endl ;

    return 0;
}
