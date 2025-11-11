#include <iostream>
//#include <windows.h>
#include "car.h"
#include <memory>
#include <vector>

using namespace std;

int main()
{
//    SetConsoleOutputCP(CP_UTF8);
//    SetConsoleCP(CP_UTF8);

    Car *objectCar1=new Car("Toyota","Corolla",2022);
    objectCar1->display();
    //muista tuhota dynaamiset oliot!
    delete objectCar1;
    objectCar1=nullptr;

    //smart pointer
    unique_ptr<Car> objectCar2 = make_unique<Car>("Kia","Sportage",2023);
    objectCar2->display();
    //muutetaan vuosimalli
    objectCar2->setYear(2024);
    cout<<"Muokattu vuosimalli= "<<objectCar2->getYear()<<endl;

    unique_ptr<Car> objectCar3 = make_unique<Car>("Ford","T",1650);
    objectCar3->display();

    unique_ptr<Car> objectCar4 = make_unique<Car>("Ford","Anglia");
    objectCar4->display();

    //oliolista
    cout<<"OLIOLISTA"<<endl;
    vector<Car> carList;
    // Luodaan olioita listaan
    carList.emplace_back("Nissan", "skyline", 1998);
    carList.emplace_back("Opel", "Insignia", 2024);
    carList.emplace_back("Honda", "CRV", 2012);
    carList.emplace_back("Mersu", "EQ", 2025);
    carList.emplace_back("Skoda", "Ocstavia", 2021);



    for(int x=0; x<=4; x++){
        cout<<"-";
        carList[x].display();
    }

    return 0;
}
