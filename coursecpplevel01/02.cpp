#include <iostream>

using namespace std ;


struct stOwner{
  string fullName ;
  string Phone ;
  
};


struct stCar {
    string Brand ;
    string Model ;
    int Year ;
    stOwner Owner ;
};



int main() {

stCar MyCar1  ,MyCar2;
MyCar1.Brand = "Toyota" ;
MyCar1.Model = "Camry" ;
MyCar1.Year = 2020 ;
MyCar1.Owner.fullName ="Nader Chargui" ;
MyCar1.Owner.Phone = "0654789123" ;

cout << "My Car is a " << MyCar1.Brand << " " << MyCar1.Model << " and it was made in " << MyCar1.Year << MyCar1.Owner.fullName<< " "<<MyCar1.Owner.Phone << "." << endl;

MyCar2.Brand = "Honda" ;
MyCar2.Model = "Accord" ;
MyCar2.Year = 2019 ;

cout << "My Car is a " << MyCar2.Brand << " " << MyCar2.Model << " and it was made in " << MyCar2.Year << "." << endl;

 

    return 0;
}
 


