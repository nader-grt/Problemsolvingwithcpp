#include <iostream>
#include <string>
using namespace std ;





int main() {

string MyString ="ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;

 cout <<"The Leng of MyString is " << MyString.length() << endl ;
cout<<MyString[MyString.length()]<<endl;
cout<<MyString[0] << endl;

string st1 = "10",st2 ="20" ,resultString ;

resultString = st1 + st2;
cout << "Result String is : " << resultString << endl;

int sum = stoi(st1) + stoi(st2); 

 cout << "Sum of st1 and st2 is : " << sum << endl;
    return 0;
}
