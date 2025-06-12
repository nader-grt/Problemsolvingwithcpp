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
int PinCode ;
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
       cin>> BankClient.PinCode;
        cout<<"\n Enter Your Name ";
 cin>> BankClient.Name ;
        cout<<" \n Enter Your  Phone ";
       cin>>BankClient.Phone ;
        cout<<"\n Enter Account Balance  ";

    cin>> BankClient.BalanceAccount ;



    return BankClient ;
}

vector <string> ConvertDataToStringVector(StBankClient &BankClient)
{
            vector <string> vElements ;
         
            if(vElements.size() == 0)
            {
                  vElements.push_back(BankClient.AccountNumber)  ;
            vElements.push_back(to_string(BankClient.PinCode))  ;
             vElements.push_back(BankClient.Name)  ;
              vElements.push_back(BankClient.Phone)  ;
               vElements.push_back(to_string(BankClient.BalanceAccount))  ;
            }

          

          return vElements ;
          
}

string JoinString(vector <string> &vElements ,string seperator)
{
    string s2 = ""  ;
      for (string &ele  : vElements)
          {
            s2 +=  ele + seperator ;

          }


          return s2.substr(0,s2.length()  - seperator.length() )  ;
 }


string ConvertRecordDataClientToLine(vector <string> &vElements)
{

        
    return  JoinString(vElements,"#//") ;
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;





StBankClient BankClient  ;

                 BankClient    = ReadAccountClent()  ;

         vector <string> vString ;
            vString = ConvertDataToStringVector(BankClient) ;

cout<<ConvertRecordDataClientToLine(vString) ;








   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
