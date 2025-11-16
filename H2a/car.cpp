#include "car.h"

void Car::setBrand(string b) {
    brand = b;
}


void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

void Car::printData() {
    cout<<"Merkki: "<<brand<<endl;
    cout<<"Malli: "<<model<<endl;
    cout<<"Vuosimalli: "<<yearModel<<endl;
}
