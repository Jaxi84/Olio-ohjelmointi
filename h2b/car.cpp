#include "car.h"

void Car::setbrand(const string &newbrand) {
    brand = newbrand;
}

void Car::setModel(const string &newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}

Car::Car() {}

Car::Car(string _brand, string model, int yearModel) {
    this->brand=_brand;
    this->model=model;
    this->yearModel=yearModel;
}

void Car::printData() {
    cout<<"Auton tiedot:"<<endl;
    cout<<"Merkki: "<<this->brand<<endl;
    cout<<"Malli: "<<this->model<<endl;
    cout<<"Vuosimalli: "<<this->yearModel<<endl;
    cout<<"********************"<<endl;
}
