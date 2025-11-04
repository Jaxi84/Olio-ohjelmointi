#include "person.h"

#include <iostream>

using namespace std;

int main()
{
    //luodaan olio pinoon (stack)
    //ns. automaattinen olio
    //olio tuhoutuu automaattisesti
    Person objPerson;
    objPerson.age=27;
    objPerson.name="Tess Tester";
    cout << objPerson.name <<" is "<< objPerson.age << " years old."<<  endl;

    //luodaan olio kekoon (heap)
    //meidän tulee tuhota olio, kun sitä ei tarvita
    Person *objPerson2;
    objPerson2= new Person();
    objPerson2->age=33;
    objPerson2->name="Erkki Esimerkki";
    cout << objPerson2->name <<" is "<< objPerson2->age << " years old."<<  endl;
    delete objPerson2;
    objPerson2=nullptr;

    return 0;
}
