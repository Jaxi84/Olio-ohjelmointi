#include "person.h"

Person::Person(string n) {
    name=n;
    //jos olio luotaisiin täällä, ei alapuolella olevassa metodissa
    //pääsisi siihen käsiksi, vaan oli vain käytössä tämän konstructorin sisällä
    //1-tehtävä
    //Olion luotu person.h:ssa
    //objAddress=Address("Rapylapolku 1313","12345","Ankkalinna");
    //unique_ptr:llä:
    objAddress=make_unique<Address>("Rapylapolku 1313","12345","Ankkalinna");
}

void Person::tulostaTiedot()
{
    cout<<"Nimi= "<<name<<endl;
    //1-tehtävä
    //osoite luotu pinoon, niin voidaan käyttää piste operaattoria objAddress.tulosta...
    //this->objAddress.tulostaOsoite();
    //2-tehtävä unique_ptr:llä:
    this->objAddress->tulostaOsoite();
}

Person::~Person()
{
       cout<<"Person olio tuhottiin\n";
}
