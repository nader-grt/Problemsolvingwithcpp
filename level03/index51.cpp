#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

string ReadPinCode()
{
  string PinCode = ""  ;
   cout<<"Enter Your Pin Code "<<endl ;
   getline(cin,PinCode)  ;
   return PinCode ;
  
}
bool Login()
{
  string PinCode ;
  do
  {
    PinCode = ReadPinCode() ;
    if(PinCode == "1234")
    return 1 ;
    else
    cout << "\033[31mWrong Pin\033[0m" <<endl;
    /* code */
  } while (PinCode != "1234");
  
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===               ATM PIN                                         ====\n"                              ;
   cout<<"======================================================================\n";
  // cout << "\033[31mThis is red text\033[0m" <<endl;
  //  cout << "\033[32mThis is green text\033[0m" <<endl;
  //  cout << "\033[33mThis is yellow text\033[0m" <<endl;
  //  cout << "\033[34mThis is blue text\033[0m" <<endl;
     if(Login())
     {

       cout << "\033[32m Entred your Code Pine Success\033[0m" <<endl;
       cout<<"Your balance containe " + to_string(7500)  + "$" <<endl ;
     }
     cout<<"\n \n \n \n \n \n " ;
    return 0;
}
