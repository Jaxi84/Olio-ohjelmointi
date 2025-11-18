#include "person.h"

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    Person objectPerson("Erkki Esimerkki","Isokatu 88","90100","Oulu");
    objectPerson.printData();
    //vektori
    vector<Person> personList;
    personList.emplace_back("Hannu Hanhi","Ankkalinna 88","12345","Ankkalinna");
    personList.emplace_back("Musta Kaapu","Piilopaikka 123","12345","Ankkalinna");
    personList.emplace_back("Komissaario Sisu","Poliisilaitos 1","12345","Ankkalinna");
    cout<<"Lista:"<<endl;
    for(Person obj: personList){
        obj.printData();
    }
    return 0;
}
