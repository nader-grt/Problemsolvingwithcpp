#pragma warning(disable : 4996)
#pragma once

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


using namespace std;



class clsDate
{
private:
     short _Day ;
     short _Month = 1 ;
     short _Year = 1900 ;
public:
    clsDate(/* args */)
    {
        time_t t = time(0);
        tm *now = localtime(&t);
        _Day = now->tm_mday  ;
        _Month = now->tm_mon ;
        _Year =  now->tm_year  ;


    }


    
    ~clsDate()
    {

    }
};


