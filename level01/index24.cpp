#include <iostream>
#include <cmath>

using namespace std ;
//Problem print numbers from 1 to N

void PrintNumberFromeNToEnd(string message)
{
    int count =1 ,nbr = 0;
      cout<<message<<endl ;
        cin>>nbr ;
        cout<<"\n All numbers from N to one with "<<" N = "<<nbr<<endl;
        count = nbr + 1 ;
    do
    {
      
      count = count-1 ;
      cout<<count<<endl ;
  
    } while (  !(count==1));
    
}

int main() {
   
PrintNumberFromeNToEnd("Enter the number that you want please ! ");

     cout<<"\n" ;
    return 0;
}
