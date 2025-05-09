#include <iostream>
#include <cmath>
#include <string>

using namespace std ;


// Global constant string
const std::string name = "Wrong PIN Please enter again";
int balanceAcount  = 7500 ;

int ReadNumberAcountATMTimes(string message)
{
    int nbr = 0 ;


    do{
      cout<<message<<endl ;
      cin>>nbr ;

    }while(nbr<0) ;
    return nbr  ;
}

void PrintBalanceNumberATMTimes(int  yourAcountNumber)
{
    int nbr = 0 ;
     int  acountNumber =1234 ;

    do{
 if(acountNumber !=  yourAcountNumber)
 {

      cout<<::name<<endl ;
      cin>>yourAcountNumber  ;

     nbr++ ;
 }else{
    cout <<"Your Balance is  "<<::balanceAcount  <<endl ;
    break;
 }
    

    }while(nbr<3) ;

}

int main() {
   
  int acountNumberInAcount = ReadNumberAcountATMTimes("Enter your account please : ")  ;
  PrintBalanceNumberATMTimes(acountNumberInAcount)  ;
     cout<<"\n" ;
    return 0;
}
