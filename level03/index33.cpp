#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

int  ReadNumber()
{
    int Number =0 ;
    do
    {
       cout<<"\n Enter the number Do you want make an power? "<<endl ;
       cin>>Number ;

    } while (Number < 0);
    return Number ;
    

}
void PowerNumberOf2_34(int Number)
{
    int A=0,B=0 , C =0;
    A = Number * Number ;

      B = Number * Number * Number;
        C = Number * Number  * Number * Number;
        cout<<A<<"  "<<B<<"  "<<C<<endl ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";
PowerNumberOf2_34(ReadNumber())  ;

     cout<<"\n" ;
    return 0;
}
