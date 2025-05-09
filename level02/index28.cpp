#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std ;

struct  StEmployee {

    int empno  ;
    string fName ;
    string lName ;
    float salary  ;
    float bonus ;
     float netSalary  ;
};

// void ReadArrayData(int arr[100] ,int &length)
// {

//     cout<<"How many number for entred for array "<<endl ;
//     cin>>length ;

//     for (int  i = 0; i < length; i++)
//     {
//         cout<<"The first number is [ "<<i +1 <<" ] " <<endl;
//         cin>>arr[i] ;
//     }
    
// }

// void PrintArrayData(int arr[100] ,int &length)
// {

   

//     for (int  i = 0; i < length; i++)
//     {
//         cout<<"The  number  [ "<<i +1 <<" ] " << arr[i]<<endl  ;
//         ;
//     }
    
// }

// int  CalculateSumDataArray(int arr[100],int length)
// {
//    int sum = 0 ,
//     for (int  i = 0; i < length; i++)
//    {
//       sum += arr[i]  ;
//    }
//    return sum ;
// }


// float GetAverageDataArray(int arr[100], int length)  
// {

//      return   (float) (CalculateSumDataArray(arr ,length) /length)  ;
// }


void ReadInfoEmployee(StEmployee  &Employee)
{
   

     cout<<" Enter the number of Employee "<<endl ;
     cin>>Employee.empno ;
       cout<<"\n Enter the First Nmae of Employee "<<endl ;
     cin>>Employee.fName ;
       cout<<" \n Enter the last Name of Employee "<<endl ;
     cin>>Employee.lName;
       cout<<" \n Enter the salary of Employee "<<endl ;
     cin>>Employee.salary ;
       cout<<" \n Enter the Bonus of Employee "<<endl ;
     cin>>Employee.bonus ;
  
       Employee.netSalary  = Employee.salary + Employee.bonus  ;
   

}

void PrintInfoEmployee(StEmployee  &Employee)
{
    /**
      * 
      *    int empno  ;
    string fName ;
    string lName ;
    float salary  ;
    float bonus ;
     float netSalary  ;
      */
       cout<<"  the number of Employee "<<endl ;
     cout<<Employee.empno ;
       cout<<"  \nthe First Name of Employee "<<endl ;
     cout<<Employee.fName ;
       cout<<" \n the last Name of Employee "<<endl ;
     cout<<Employee.lName;
       cout<<" \n the salary of Employee "<<endl ;
     cout<<Employee.salary ;
       cout<<" \n the Bonus of Employee "<<endl ;
     cout<<Employee.bonus ;
       cout<<"   \n the Net salary  of Employee "<<endl ;
     cout<<Employee.netSalary ;
}
void ReadListEmployee(StEmployee  Employee[100] ,int &numberEmployee)
{
    cout<<"How many  employee do you entred ! "<<endl ;
    cin>>numberEmployee  ;
    for (int i = 0; i < numberEmployee; i++)
    {
       ReadInfoEmployee(Employee[i])   ;
         cout<<" \n------------------------------------------------------------------------------------------------------------------------------ \n" ;
        cout<<"\n \n "  ;
    }
    
}



void PrintListEmployee(StEmployee  Employee[100] ,int &numberEmployee)
{
      

      cout<<"\n \n       List  Employee                   \n \n \n" ;
    for (int i = 0; i < numberEmployee; i++)
    {
          cout<<"\n \n        Employee    :    " <<i +1 ;
           cout<<"\n \n  \n \n \n" ;
       PrintInfoEmployee(Employee[i]) ;
        cout<<" \n------------------------------------------------------------------------------------------------------------------------------ \n" ;
        cout<<"\n \n "  ;
    }
}


int main() {
   
   cout<<"======================================================================\n";
   cout<<"===      Struct  and Array and function c++ languages App         ====\n"                              ;
   cout<<"======================================================================\n";

   
StEmployee  Employee[100]  ;
int  numberEmployee ;



ReadListEmployee(Employee,numberEmployee)  ;
PrintListEmployee (Employee,numberEmployee)  ;

cout<<"======================================================================\n";
cout<<"======================================================================\n";
cout<<"======================================================================\n";
cout<<"======================================================================\n";



// int arr[100]  ,length ;
// ReadArrayData(arr,length)  ;
// PrintArrayData(arr,length)  ;




     cout<<"\n" ;
    return 0;
}
