#include <iostream>
#include <fstream>

using namespace std ;
 

 void PrintFileContent(string fileName)
 {
    fstream file ;
    file.open(fileName ,ios::in | ios::app) ;
    string line ;
    if(file.is_open())
    {
        while(getline(file,line))
        {
            cout<<line<<endl ;
        }
        file.close() ;
    }
 }

int main(){

PrintFileContent("hello.txt" ) ;

    return 0 ;
}