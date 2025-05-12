#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

string ReadCodePin(){
    string CodePin = "";
    cout<<"\n Enter Your Code Pin PLZ ?"<<endl ;
    getline(cin,CodePin)  ;
    return CodePin ;
}

bool Login()
{
      string CodePin ;
      int count = 3 ;
      do
      {
        count-- ;
        CodePin = ReadCodePin()  ;
        if(CodePin == "1234")
        return 1 ;
        else
        cout << "\033[31mWrong Pin and you have \033[0m" + to_string(count) <<endl;
        /* code */
      } while (count >1 && CodePin != "1234");
      


    return 0 ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Problem ATM THREE TIMES            ====\n"                              ;
   cout<<"======================================================================\n";
   
   if(Login())
   {
     cout << "\033[32m Entred your Code Pine Success\033[0m" <<endl;
       cout<<"Your Acount balance containe " + to_string(7500)  + "$" <<endl ;
   }else
   cout<<"Card is Blocked PLZ Call Bank Thanks! ";


     cout<<"\n \n \n \n \n \n" ;
    return 0;
}
