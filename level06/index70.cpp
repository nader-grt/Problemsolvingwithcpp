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

/**
 * 


🧠 Explanation of the Key Parts
✅ fs::exists(baseDir)
This checks if the path actually exists on your filesystem.

It returns true if the path exists (could be a file or directory).

If the path is not found (e.g., a typo or nonexistent path), it returns false.

✅ fs::is_directory(baseDir)
This checks if the existing path is specifically a directory.

It returns true only if:

The path exists.

The path is a directory (not a regular file, symlink, etc)





 */

bool IsDirectory(const std::string& path) {
    return fs::exists(path) && fs::is_directory(path);
}


        bool FindFolderByName(const string& baseDir, const string& folderName) 
        {


            /**
                             if (entry.is_directory() && entry.path().filename() == folderName)
                    ✅ 1. entry.is_directory()
                    This checks if the current entry is a folder.

                    We only want to compare folder names, not files — so this avoids checking file names.

                    ✅ 2. entry.path().filename()
                    This gets the name of the folder (or file) only, not the whole path.

                    For example, if the full path is:

                  
                    /home/nader/documents/projects/myfolder
                    then entry.path().filename() returns:

                   
                    "myfolder"
                    ✅ 3. entry.path().filename() == folderName
                    This checks if the current folder's name exactly matches the one the user wants to find.

                    ✅ 4. Combined with &&
                    The full condition:

                   
                    if (entry.is_directory() && entry.path().filename() == folderName)
                    means:

                    "If this entry is a directory, and its name equals the folderName we are searching for — then return true."















             */
                    for (const auto& entry : fs::recursive_directory_iterator(baseDir)) {
                        if (entry.is_directory() && entry.path().filename() == folderName) {
                        // cout << "Found at: " << entry.path().string() << "\n";
                        //  cout << entry.path().filename().string();
                            return true;
                        }
                    }
            return false;
        }
  
        
            string GetBaseDirectoryFromUser() 
            {
                    
                    string baseDir;

                    cout << "Enter base directory (e.g. /home/yourname): ";
                    getline(cin, baseDir);

                    while (!fs::exists(baseDir) || !fs::is_directory(baseDir)) 
                    {
                        cout << " Invalid directory path. Please enter a valid directory: ";
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
            cout << "Folder name cannot be empty. Please enter a valid folder name: ";
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
//  ## /home/nader/coursecpp/level06/output/MylibraryWORKWITHFILE


   string folderName = GetFolderNameFromUser()  ;

   string basePath  = GetBaseDirectoryFromUser()  ;


if(FindFolderByName(basePath,folderName))
{
    cout <<" \n  exist"  ;
}else
{
    cout <<" \n no exist"  ;
}














   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
