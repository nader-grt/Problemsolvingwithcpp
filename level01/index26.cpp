#include <iostream>
#include <cmath>

using namespace std ;

//Probel sum for numbers EVEN  Paire

int ReadPositiveNumber(string message)
{
    int nbr = 0 ;
    do
    {
      cout<<message<<endl ;
      cin>>nbr ;
    } while (nbr<0);
    
    return nbr ;

}
void SumNumbersEven(int &number)
{
    int sum = 0, count = 1 ;

    do
    {
        if(count % 2 == 0){
        sum=sum +count ;
       
        }
        count = count + 1 ;
    } while (number != count);
    cout<<"\n The result of list all numbers \t "<<sum<<endl ;
}
int main() {
   
int number = ReadPositiveNumber("Enter the number you want please ! ") ;
SumNumbersEven(number) ;

     cout<<"\n" ;
    return 0;
}
