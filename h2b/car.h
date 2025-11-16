#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    Car(string, string, int);
    void printData();

    void setbrand(const string &newbrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);
};

#endif // CAR_H
