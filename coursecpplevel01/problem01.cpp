#include <iostream>

using namespace std ;


void displayFuulName(){
    cout<<"Enter your full name : "<<endl ;
    string fullName ;
    cin>>fullName ;
    cout<<"Your full name is : "<<fullName<<endl;
}

void printName(){
    cout<<"Enter your name : "<<endl ;
    string name  = "Nader";
    cout<<"Your name is : "<<name<<endl;
}


int main() {

displayFuulName() ;
printName() ;

 

    return 0;
}
