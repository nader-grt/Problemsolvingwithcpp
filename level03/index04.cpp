#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

 enum EnNumberType {Even =1 ,Odd=2}  ;
 int ReadNumber()
 {
    int nbr = 0 ;
   

    do
    {
       cout<<" \n Enter number positive PLZ "<<endl ;
       cin>>nbr ;
    } while (nbr <0);
    return nbr ;
    
 }

 EnNumberType  checkNumberType(int Number)
 {
       int result = Number % 2 ;
       if(result  == 0)
       {
        return EnNumberType::Even ;
       }else
       {
         return EnNumberType::Odd ;
       }

 }

 void PrintNumberType(EnNumberType  NumberType)
 {
    if(NumberType ==  EnNumberType::Even)
    {
     cout<<" \n Number is Even "<<endl ;
    }else
    cout<<" \n Number is Odd "<<endl ;
 }
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===              Number is Even Or Odd                            ====\n"                              ;
   cout<<"======================================================================\n";

PrintNumberType(checkNumberType(ReadNumber()))  ;
     cout<<"\n" ;
    return 0;
}
