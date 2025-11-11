#include "henkilo.h"

int Henkilo::getAge() const
{
    return age;
}

void Henkilo::setAge(int newAge)
{
    age = newAge;
}

string Henkilo::getName() const
{
    return name;
}

void Henkilo::setName(const string &newName)
{
    name = newName;
}

void Henkilo::printData()
{
    cout <<"nimi="<<name<<", ika="<<age<<endl;
}

Henkilo::Henkilo(string n, int a) {
//Henkilo::Henkilo(string name, int age) {
    name=n;
    age=a; // koska muuttujalla eri nimi, niin ei tarvitse this sanaa
    //this->name=name;
    //this->age=age;
    //this->name on jäsenmuuttuja name
    //name on metodin parametri
}

Henkilo::Henkilo()
{

}
