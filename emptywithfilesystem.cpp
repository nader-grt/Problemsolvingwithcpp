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

bool FindFolderByName(const string& baseDir, const string& folderName) {
    for (const auto& entry : fs::recursive_directory_iterator(baseDir)) {
        if (entry.is_directory() && entry.path().filename() == folderName) {
          // cout << "✅ Found at: " << entry.path().string() << "\n";
            return true;
        }
    }
    return false;
}

string GetBaseDirectoryFromUser() {
    string baseDir;

    cout << "Enter base directory (e.g. /home/yourname): ";
    getline(cin, baseDir);

    while (!fs::exists(baseDir) || !fs::is_directory(baseDir)) {
        cerr << " Invalid directory path. Please enter a valid directory: ";
        getline(cin, baseDir);
    }

    return baseDir;
}

string GetFolderNameFromUser() {
    string folderName;

    cout << "Enter folder name to search for: ";
    getline(cin, folderName);

    // Simple validation: folder name should not be empty
    while (folderName.empty()) {
       cerr << "Folder name cannot be empty. Please enter a valid folder name: ";
       getline(cin, folderName);
    }

    return folderName;
}



int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




  string baseDir = GetBaseDirectoryFromUser();
    cout << " You entered a valid directory: " << baseDir << endl;

















   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
