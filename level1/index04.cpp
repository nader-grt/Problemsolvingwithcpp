#include <iostream>

using namespace std ;


int simpleMultiplication(int num){
    return num %2 == 0 ? num * 8 : num *9 ;
}


int main() {

int result = simpleMultiplication( 2) ;

int result1 = simpleMultiplication( 1) ;
int result2 = simpleMultiplication( 8) ;
int result3 = simpleMultiplication( 4) ;
int result4 = simpleMultiplication( 5) ;

cout<<result    << endl;


cout<<result1   << endl;

cout<<result2   << endl;

cout<<result3   << endl;

cout<<result4   << endl;
 

    return 0;
}
