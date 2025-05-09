#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

string ReadName()
{
    string Name ;
    cout<<"PLease Enter Your Name? "<<endl ;
    getline(cin ,Name) ;
    return Name ;
}

void PrintName(string Name)
{

    cout<<"  \n Your Name is : "<<Name <<endl ;
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

PrintName(ReadName())  ;
     cout<<"\n" ;
    return 0;
}
