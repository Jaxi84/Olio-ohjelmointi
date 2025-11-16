#include <iostream>
#include "car.h"
#include <memory>
#include <vector>

using namespace std;

int main() {
    vector<Car> carList;
    carList.emplace_back("Nissan", "Skyline", 2001);
    carList.emplace_back("Opel", "Insignia", 2024);
    carList.emplace_back("Honda", "CRV", 2012);

    cout<<"Toisen alkion tiedot:"<<endl;
    carList[1].printData();

    cout<<"\nTulstetaan kaikkien autojen tiedot:"<<endl;
    for(int x=0; x<carList.size(); x++){
        cout<<"-";
        carList[x].printData();
    }
    return 0;
}
