#include <iostream>
#include <fstream>

//Problem print all numbers from 1 to n

using namespace std ;


void PrintFileCOntent(string filename)
{
    //ios::out | ios::app |
    fstream file;
        file.open(filename ,  ios::in);

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << '\n';
        }
        file.close();
    }
}


int main() {


 PrintFileCOntent("example.txt");

    return 0;
}
