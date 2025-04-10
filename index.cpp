#include <iostream>

using namespace std ;

void displayName(string name){

    cout<<name + " learn c plus plus "<<endl ;
}

void PrintFullName(){
    string fName = "" , lName="";
    cout <<"Enter First Name \n" ;
 

cin>>fName ;
   cout<<"Enter Last Name \n" ;
cin>>lName ;
cout<< fName + " " + lName ;

}
int main() {
    // cout << "Hello, World!" << endl;

    // string name = "Nader" ;
    // displayName(name) ;
    // cout << "Hello, " << name << "!" << endl;
     PrintFullName() ;
     cout<<"\n" ;
    return 0;
}
