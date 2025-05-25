#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>    
#include <ctime>     
#include <iomanip> 
#include <vector>

#include "LibraryOrPackage/MyLib.h" ;


using namespace std ;




int main() {
   
   cout<<"======================================================================\n";
   cout<<"===                Training using c++ languages App               ====\n"                              ;
   cout<<"======================================================================\n";

  srand((unsigned)time(NULL)); 

   //cin.ignore(1,'\n') ;


// vector<int> num{ 1, 2, 3, 4, 5 };
// // declare iterator
// vector<int>::iterator iter;
// // use iterator with for loop
// for (iter = num.begin(); iter != num.end();iter++)
// {
// cout << *iter << " ";
// }



vector<int> vNumbers = { 1, 2, 3, 4, 5 };

	vector<int>::iterator iter;

	for (iter = vNumbers.begin(); iter != vNumbers.end(); iter++)
	{
		cout << *iter << " ";
		cout << &iter << endl;
	}
	cout << endl;
	for (iter = vNumbers.end() - 1; iter != vNumbers.begin(); iter--)
	{
		cout << *iter << " ";
		cout << &iter << endl;
	}
	cout << *vNumbers.begin() << " ";
	cout << &iter << endl;

	// Result of this program is:
	/*
	1 000000A99EF6F378
	2 000000A99EF6F378
	3 000000A99EF6F378
	4 000000A99EF6F378
	5 000000A99EF6F378
	
	5 000000A99EF6F378
	4 000000A99EF6F378
	3 000000A99EF6F378
	2 000000A99EF6F378
	1 000000A99EF6F378
	*/













   cout<<"\n \n \n \n \n \n \n \n \n \n " ;

     cout<<"\n" ;
     cout<<"\n" ;
    return 0;
}
