#include <iostream>

#include "clsDate.h"
#include "clsString.h"


using namespace std;

int main()

{
           


  clsString  string1 ,string2("Nader") ;

  string1.setValue("Ali Ahmed Oday Monaim") ;



cout<<"String 1 "<<string1.getValue() <<endl ;

cout<<"String 2 "<<string2.getValue() <<endl ;



cout<<"count of word "<<string1.countWord() <<endl ;

cout<<"count of word througth class  "<<clsString::countWord("Ali Wahid Achref Oday Nabil") <<endl ;


 




     clsDate Date1;
    Date1.Print();

    clsDate Date2("31/1/2022");
    Date2.Print();

    clsDate Date3(20, 12, 2022);
    Date3.Print();

    clsDate Date4(250,2022);
    Date4.Print();

    Date1.IncreaseDateByOneMonth();
    Date1.Print();

    //Date3.PrintYearCalendar();
    //cout << Date2.IsValid() << endl;
    
    /*cout << "My Age InDays:" <<
        clsDate::CalculateMyAgeInDays(  clsDate(6, 11, 1977) );*/
    //You can try any method at your own..

  //  system("pause>0");
    return 0;
}


