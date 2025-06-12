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

/**
 * 
 * 
00  01  02
10  11  12
20  21  22


 * 
 * 
 
 */



// string ReadStr() {
// 	string In;
// 	cout << "\n Pls enter string : " << endl;
// 	getline(cin, In);
// 	return In;
// }
// string UpperFirstLettersOfString(string Input) {
// 	cout << "\n Conversion First Letters of String to Capital : " << endl;
// 	bool FirstLetter = 1;
// 	string OutPut;
// 	for (short i = 0; i < Input.length(); i++) {
// 		if (FirstLetter) {
// 			Input[i] = toupper(Input[i]);
// 		}
// 		OutPut += Input[i];
// 		FirstLetter = (Input[i] == ' ') ? 1 : 0;
// 	}
// 	return OutPut;
// }



                //       string ReadString()
                //      {
                //              string S1;

                //              cout << "Please Enter Your String?\n";

                //              getline(cin, S1);

                //                     return S1;
                //     }


                // string UpperFirstLetterOfEachWord(string S1)
                // {

                // bool isFirstLetter = true;
                //         for (short i = 0; i < S1.length(); i++)
                //         {
                //             if (S1[i] != ' ' && isFirstLetter)
                //             {

                //                S1[i] = toupper(S1[i]);
                //             }

                //             isFirstLetter = (S1[i] == ' ' ? true : false);
                //         }
                // return S1;

                // }


vector <string> SpliteFunction(string s)
{


     vector <string> vElements ;
     short pos ;
     string sword ,seperator = " " ;

     while ((pos = s.find(seperator))   != string::npos  )
     {
         sword = s.substr(0,pos) ;

         if(sword != " ")
         {
            vElements.push_back(sword)  ;
         }
         s.erase(0,pos + seperator.length()) ;
     }
        if(s != " ")
         {
            vElements.push_back(s)  ;
         }

     return vElements  ; 
}


string JoinString(vector <string> velements ,string seperator)
{
    string s1 = "" ;

    for (string  &ele : velements)
    {
        s1 = s1 + ele + seperator ;
    }

    return s1.substr(0,s1.length() - seperator.length()) ;
    
}


string JoinString( string velements[] ,short length,  string seperator)
{
    string s1 = "" ;

          for (short  i = 0; i < length ; i++)
          {
             s1 = s1 + velements[i]  + seperator ;
          }
          

    return s1.substr(0,s1.length() - seperator.length()) ;
    
}

string TrimRight(string s2)
{



     for (short i = 0; i < s2.length; i++)
     {
       if(s2[i] != '')
       {
        return s2.substr(i,s2.length() - i) ;
       }
     }
     
}

int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;




           vector <string> vToken  ;

           vector<string> vString = { "Mohammed","Faid","Ali","Maher" };
string arrString[]= { "Mohammed","Faid","Ali","Maher" };
           string s = MyLib::ReadString("PLease ENter Your String? ") ;

                     vToken =    SpliteFunction(s)  ;

              printf(" Token is %d ",vToken.size()) ;
cout<<"\n \n"  ;
             for (string &ele : vToken)
             {
                cout<<  ele <<endl ;
             }
             
              











   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
