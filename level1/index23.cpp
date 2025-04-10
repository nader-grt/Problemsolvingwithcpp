#include <iostream>
#include <cmath>

using namespace std ;
//Problem print numbers from 1 to N

void PrintNumberFromeOneToN(string message)
{
    int count =0 ,nbr = 0;
      cout<<message<<endl ;
        cin>>nbr ;
        cout<<"\n All numbers from one to N \n";
    do
    {
      
        count = count +1 ;
      cout<<count<<endl ;
    } while ( !(nbr ==count));
    
}

int main() {
   
PrintNumberFromeOneToN("Enter the number that you want please ! ");

     cout<<"\n" ;
    return 0;
}
