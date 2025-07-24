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

#include "clsDate.h"

 using namespace std ;

 class clsInputValidate
 {
 private:
    /* data */
 public:


      static  bool IsNumberBetween(short Number , short From ,short To)
      {

             if(Number <= To && Number >= From)
             return true

             return false
      }


            static  bool IsNumberBetween(int Number , int From ,int To)
      {

             if(Number <= To && Number >= From)
             return true

             return false
      }



    
            static  bool IsNumberBetween(double Number , double From ,double To)
      {

             if(Number <= To && Number >= From)
             return true

             return false
      }


            static  bool IsNumberBetween(float Number , float From ,float To)
      {

             if(Number <= To && Number >= From)
             return true

             return false
      }

      static IsDateBetween(clsDate Date1)
      {
         
      }


    clsInputValidate(/* args */)
    {
        
    }
    ~clsInputValidate()
    {

    }
 };
 

 