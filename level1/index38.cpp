#include <iostream>
#include <cmath>

using namespace std ;

//Problem of Seconds to Days Hours Minutes Seconds 2:5:45:35

//    cout << "Floor of 2.3 is : " << floor(2.3) << endl;

/*
Input : 2.5
Output : 2
*/


int ReadNumberPositive(string message)
{
    int nbr = 0 ;
    do
    {
     cout<<message<<endl ;
     cin>>nbr ;
    } while (nbr<0);
    
    return nbr ;
}

int main() {

//    float  secondPerDay = 24 * 60 *60 ;
//    float secondPerHours = 60 * 60 ;
//    float secondPerMinute = 60 ;

//


  // cout<<"\n The result D:H:M:S is "<<nbrDays<<":"<<nbrHours<<":"<<nbrMinutes<<":"<<nbrSecond<<endl ;


 cout << "Floor of 2.3 is : " << floor(2.3) << endl;
  cout << "Floor of 2.7 is : " << floor(2.7) << endl;
   cout << "Floor of 2.9 is : " << floor(2.9) << endl;

     cout << "Floor of 2.5 is : " << floor(2.9) << endl;
     cout<<"\n" ;
    return 0;
}
