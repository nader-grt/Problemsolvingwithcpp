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
void PrintRemainder(int &cashPaid,int &totalPaid)
{
    int remainder = 0 ;
    remainder = cashPaid - totalPaid ;
    if(remainder > 0)
    {
        cout<<"\n The result of remainder is \t"<<remainder<<endl ;
    }else{
          cout<<"\n The result of remainder  if totalPaid is greater Than of totalPaid is \t"<< (-1) * remainder<<endl ;
    }
}
int main() {
   int  cashPaid =  ReadNumberPositive("Enter a positive Number cashPaid ") ;
   int totalPaid =  ReadNumberPositive("Enter a positive Number totalPaid ") ;
PrintRemainder(cashPaid,totalPaid)  ;
     cout<<"\n" ;
    return 0;
}
