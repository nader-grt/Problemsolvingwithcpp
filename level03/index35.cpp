#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

int ReadNumberInRange(int From,int To)
{

    int Grade ;
    do
    {
       cout<<"\n Enter the Grade betwwen " + to_string(From) + " And " + to_string(To) +" \n" ;
       cin>>Grade ;
    } while (  Grade < From  || Grade >To  );
    return Grade ;
    
}

char GetGradeLetter(int Grade)
{
    if(Grade >= 90)
    return 'A';
    else if(Grade >= 80)
    return 'B' ;
    else if(Grade >= 70)
    return 'C' ;
    else if(Grade >= 60)
    return 'd';
    else if(Grade >= 50)
    return 'E' ;
    else
    return 'F';
}
int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

cout  <<endl ,

cout<<endl <<" Result is "<<GetGradeLetter(ReadNumberInRange(0,100)) ;
     cout<<"\n \n \n \n" ;
    return 0;
}
