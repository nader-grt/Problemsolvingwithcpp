#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */


struct StBankClient {
string AccountNumber ="" ;
string PinCode ;
string Name = "" ;
string Phone = "";
float BalanceAccount ;


};

StBankClient ReadAccountClent()
{

        cout<< "\n \nPlease Enter Client Data Of Bank? \n \n \n \n " ;
            StBankClient BankClient ;
        cout<<"\n Enter Account Number ";
        getline(cin,BankClient.AccountNumber) ;

        cout<<"\n Enter Pin  Code ";
          getline(cin,BankClient.PinCode) ;
      // cin>> BankClient.PinCode;
        cout<<"\n Enter Your Name ";
         getline(cin,BankClient.Name) ;
// cin>> BankClient.Name ;
        cout<<" \n Enter Your  Phone ";
         getline(cin,BankClient.Phone) ;
     //  cin>>BankClient.Phone ;
        cout<<"\n Enter Account Balance  ";

    cin>> BankClient.BalanceAccount ;



    return BankClient ;
}

string ConvertRecordToLine(StBankClient Client ,string seperator = "#//#")
{

  string stClientRecord = "";
  stClientRecord+= Client.AccountNumber + seperator ;
    stClientRecord+= Client.PinCode + seperator ;
      stClientRecord+= Client.Name + seperator ;
        stClientRecord+= Client.Phone + seperator ;
          stClientRecord+= to_string(Client.BalanceAccount ) ;

          return stClientRecord ;
  
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


cout << "\nPlease Enter Client Data: \n\n";
StBankClient Client;
Client = ReadAccountClent();
cout << "\n\nClient Record for Saving is: \n";
cout << ConvertRecordToLine(Client)  ;
















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
