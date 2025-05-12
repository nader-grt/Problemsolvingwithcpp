#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

struct StBiggyBanckContent {
    int Pinnes , Nickles ,Dimes ,Quarter ,Dollars ;

} ;

StBiggyBanckContent ReadBiggyBanckContent()
{
     StBiggyBanckContent BiggyBanckContent  ;
         cout<<"\n Enter PlZ the number of Pinnes ";
         cin >>BiggyBanckContent.Pinnes ;
            cout<<"\n Enter PlZ the number of Nickles ";
         cin >>BiggyBanckContent.Nickles ;
            cout<<"\n Enter PlZ the number of Dimes ";
         cin >>BiggyBanckContent.Dimes ;
            cout<<"\n Enter PlZ the number of Quarter ";
         cin >>BiggyBanckContent.Quarter ;
            cout<<"\n Enter PlZ the number of Dollars ";
         cin >>BiggyBanckContent.Dollars ;
    return BiggyBanckContent  ;
}
int CalculateTotalPennies( StBiggyBanckContent BiggyBanckContent )
{
    int TotalPennies =0 ;
    TotalPennies  = BiggyBanckContent.Dimes * 2 + BiggyBanckContent.Nickles * 5 + BiggyBanckContent.Pinnes *10 + 
    BiggyBanckContent.Pinnes * 5 + BiggyBanckContent.Dollars * 100 ;
     return TotalPennies  ;    

}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";


     cout<<"\n" ;
    return 0;
}
