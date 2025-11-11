#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    Henkilo objPerson1("Teppo Testi",28);
    objPerson1.printData();

    //jos haluat niin olion voi luoda myös kuten alla
    //on Henkilo luokkaan lisättävä myös tyhjä konstruktori
    //Henkilo();
    Henkilo objPerson2;
    objPerson2.setName("Eetu Namn");
    objPerson2.setAge(21);
    objPerson2.printData();

    //dynaaminen olio
    Henkilo *objPerson3=new Henkilo("Etu nimi", 34);
    objPerson3->printData();
    delete objPerson3;
    objPerson3=nullptr;

    return 0;
}
