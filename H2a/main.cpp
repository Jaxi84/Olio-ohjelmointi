#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main() {
    //Car-luokka
    Car thisCar;
    thisCar.setBrand("KIA");
    thisCar.setModel("Sportage");
    thisCar.setYearModel(2006);

    cout<<"Auton tiedot:"<<endl;
    thisCar.printData();

    //Rectangle-luokka
    Rectangle *suorakulmio = new Rectangle();
    suorakulmio->setWidth(6);
    suorakulmio->setHeight(6);

    cout<<"\nSuorakulmion tiedot: "<<endl;
    cout<<"Pinta-ala (cm^2): "<<suorakulmio->getArea()<<endl;
    cout<<"Ymparysmitta (cm): "<<suorakulmio->getCircum()<<endl;
    delete suorakulmio;
    suorakulmio=nullptr;

    //Student-luokka
    unique_ptr<Student> opiskelija = make_unique<Student>();
    opiskelija->setName("Erkki Esimerkki");
    opiskelija->setStudentNumber(6543);
    opiskelija->setAverage(4.8);

    cout<<"\nOpiskelijan tiedot: "<<endl;
    cout<<"Nimi: "<<opiskelija->getName()<<endl;
    cout<<"Opiskelijanumero: "<<opiskelija->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<opiskelija->getAverage()<<endl;

    return 0;   
}
