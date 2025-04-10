#include <iostream>

using namespace std ;

void MyFunction(){
    cout<<"this is firsr function it got executed"<<endl;
}

int sumTwoNumbers(int num1 ,int num2)
{
    return num1 + num2 ;
}


int main() {


// MyFunction() ;

    int result = sumTwoNumbers(10, 5) , result1 = sumTwoNumbers( 110, 50) ;
    cout<<"The sum of 10 and 5 is: "<<result<<endl;
    cout<<"The sum of 110 and 50 is: "<<result1<<endl;

    // error: function not declared in scope

//    sumTwoNumbers(10, 5) ; // error: function must return a value

//  MyFunction() ; // error: function must be called before its first use

    return 0;
}
