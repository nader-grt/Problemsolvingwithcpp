#include <iostream>

using namespace std ;


void MyFunction()
{
    int x = 500;
    cout << "This is my first function." << endl;
    cout << "The value of x is: " << x << endl;
}


int main() {

int x = 100 ;
    MyFunction();
    cout << "The value of x in the main function is: " << x << endl;

    // error: variable 'x' is declared but not used
    // x = 200 ; // error: assignment to variable 'x' from incompatible type 'int'
    
 

    return 0;
}
