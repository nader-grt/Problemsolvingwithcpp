#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>
#include <fstream>
#include <filesystem>


#include "../../coursecpp/level05/LibraryOrPackage/MyLib.h" 


using namespace std ;
namespace fs = std::filesystem; // alias for std::filesystem

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;








   string baseDir = "/home/nader";

    for (const auto& entry : fs::directory_iterator(baseDir)) {
       cout << entry.path().filename().string();
        if (entry.is_directory()) {
           cout << " is a folder\n";
        } else {
           cout << " is a file\n";
        }
    }



cout<<"\n======================================================================\n";

cout<<"\n ======================================================================\n";
cout<<"\n===<===================================================================\n";
cout<<"\n ======================================================================\n";
cout<<"\n======================================================================\n";


          string folderPath = "/home/nader/projects";
          string filePath = "/home/nader/readme.txt";

          cout << folderPath << " is directory? " << fs::is_directory(folderPath) << "\n";
          cout << filePath << " is directory? " << fs::is_directory(filePath) << "\n";







   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
