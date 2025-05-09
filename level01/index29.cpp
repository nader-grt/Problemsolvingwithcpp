#include <iostream>
#include <cmath>
using namespace std ;

int ReadNumberPositive(string message)
{
    int nbr = 0 ;

    do
    {
     cout<<message<<endl ;
     cin>>nbr ;
    } while (nbr<0);
    
    return nbr ;
}


void PrintGrade(int &number)
{
    if(number >90 && number <100)
    {
       cout<<"\n  A "<<endl ;
    }else if(number >80 && number <89)
    {
      cout<<"\n  B "<<endl ;
    }else if(number >70 && number <79)
    {
     cout<<"\n  C "<<endl ;
    }else if(number >60 && number <69)
    {
      cout<<"\n  D "<<endl ;
    }else if(number >50 && number <59)
    {
       cout<<"\n  E "<<endl ;
    }else
    {
        cout<<"\n  F "<<endl ;
    }
}
int main() {
   
int grade = ReadNumberPositive("Enter the number positive please ! ") ;
PrintGrade(grade) ;
     cout<<"\n" ;
    return 0;
}
