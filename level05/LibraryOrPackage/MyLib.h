#pragma once


#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function
#include <filesystem>

using namespace std ;
namespace fs = std::filesystem; // alias for std::filesystem



 namespace MyLib {

    int ReadNumber(string message)
{
            int Number = 0;
            cout <<message<< endl;

               cout<<"\n  " ; cin >> Number;
            while (cin.fail())
            {
                // user didn't input a number
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Invalid Number, Enter a valid one:" << endl;
                cin >> Number;
            }
           return Number;
}

    int RandomNumber(int From ,int To)
    {
        return rand()  % (To - From + 1) +From  ;
    }

    void FillArrayWithRandomNumber(int arr[100] ,int &length)
    {
        for (int i = 0; i < length; i++)
        {
           arr[i]  = RandomNumber(1,100)  ;
        }
        
    }

    void PrintArray(int arr[100] ,int length)
    {
             for (int i = 0; i < length; i++)
        {
          cout<<"   " << arr[i]   ;
        }

    }

     string FindDirectoryPathWithFileExtension( string message ,string NameDirotory ) {
           string dirPath ="" ;

        if(NameDirotory.length() > 0)
         dirPath = NameDirotory ;
         else
          {
             dirPath = "MylibraryWORKWITHFILE";
    filesystem::create_directories(dirPath); // Create directory if not exists
          }
    

    string fileName;
    cout << message << endl;
    cin >> fileName;

    return dirPath + "/" + fileName + ".txt";
}


       void FillMatrixWithRandomNumber(int  matrix[3][3],int rows, int cols)
       {
                for (int  i = 0; i < rows ; i++)
                {
                        for (int j = 0;j < cols ;j++)
                        {
                           matrix[i][j]  = RandomNumber(1,100) ;
                        }
                   
                }
                

       }
   

       void PrintMatrixWithRandomNumber(int matrix[3][3] ,int rows, int cols)
       {




                for (int  i = 0; i < rows ; i++)
                {
                        for (int j = 0;j < cols ;j++)
                        {
                           printf("%0*d \t ",2,  matrix[i][j] )  ;
                        }
                   cout<<"\n"  ;
                }
                
        
       }

       char ReadOnceLetter(string message)
         {
            char ch = ' ' ;
            cout<<message<<endl ;
               cin>>ch ;
               return ch ;
         }



                  string ReadString(string message)
                  {
                     cout<<message<<endl ;

                     string line = " " ;
                     getline(cin,line) ;

                     return line ;
                  }



                                          
                  char IsInvertedOnceLetter(char ch)
                  {
                     return isupper(ch) ? tolower(ch) : toupper(ch) ;
                  }


                //  HANDLE FILE 
                  string GetBaseDirectoryFromUser() 
                  {
                     string baseDir;

                        cout << "Enter base directory (e.g. /home/yourname): ";
                        getline(cin, baseDir);

                        while (!fs::exists(baseDir) || !fs::is_directory(baseDir)) {
                           cerr << " Invalid directory path. Please enter a valid directory: ";
                           getline(cin, baseDir);
                        }

                        return baseDir;
                }

            string GetFolderNameFromUser() 
            {
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
 }