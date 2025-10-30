#include "person.h"

#include <iostream>

using namespace std;

int main()
{
    Person objPerson;
    objPerson.setName("Erkki Esimerkki");
    objPerson.setAge(25);
    cout<<objPerson.getName()<< " on " << objPerson.getAge()<<" vuotias"<<endl;
    return 0;
}
