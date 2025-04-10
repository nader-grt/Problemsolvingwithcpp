#include <iostream>
#include <fstream>

using namespace std ;





int main() {

     fstream Myfile ;
     Myfile.open("hello.txt",ios::out | ios::in | ios::app) ;

     if(Myfile.is_open()) 
     {
         Myfile << "Hello, World line !" << endl;
         Myfile.close();
     }

 

    return 0;
}
