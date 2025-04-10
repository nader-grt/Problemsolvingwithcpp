#include <iostream>
#include <string>
#include <cmath>

using namespace std ;
 struct stPerson{
    string fullName ;
    int age ;
    string phoneNumber ;
    string email ;
    string city ;
    string country ;
 } ;

void displayCard(){
       stPerson person ;
       cout<<"Enter Full Name : "<<endl ;
     //  cin>>person.fullName ;
       getline(cin, person.fullName) ;
       cout<<"Enter Age : "<<endl ;
       cin>>person.age ;
       cout<<"Enter Phone Number : "<<endl ;
       cin>>person.phoneNumber ;
       cout<<"Enter Email : "<<endl ;
       cin>>person.email ;
       cout<<"Enter City : "<<endl ;
       cin>>person.city ;
       cout<<"Enter Country : "<<endl ;
          cin>>person.country ;
}

void displayStart(){
    for(int i=0 ; i<5 ; i++)
    {
        cout<<"******" <<endl ;
    }

}

float calcule()
{
    float num1 = 10.5 ;
    float num2 = 20.3 ;
    float result = num1 * num2 ;
    return result ;
}

int main() {

// displayCard() ;
//  displayStart() ;
  float result2 = floor(calcule()) ;
    float result = ceil(calcule()) ;
    cout<<"The Result is : "<<result2 << endl ;
    return 0;
}
