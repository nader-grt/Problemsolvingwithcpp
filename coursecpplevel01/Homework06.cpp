#include <iostream>
#include <string>
#include <cmath>

using namespace std ;



void myFunctionProcedure(){
       cout <<"please enter the number 1: " << endl;
       int number1, number2;
       cin >> number1 ;
      cout <<"please enter the number 2: " << endl;
       cin >> number2 ;
       int sum = number1 + number2 ;
       cout << "The sum of the two numbers is: " << sum << endl;
}

int myFunctionReturn(){

        cout <<"please enter the number 1: " << endl;
       int number1, number2;
       cin >> number1 ;
      cout <<"please enter the number 2: " << endl;
       cin >> number2 ;
      return  number1 + number2 ;
}





int main() {


    myFunctionProcedure() ;
    int sum = myFunctionReturn() ;
    cout << "The sum of the two numbers is: " << sum << endl;

    // error: function not declared in scope

//    myFunctionReturn() ; // error: function must return a value
 

    return 0;
}
