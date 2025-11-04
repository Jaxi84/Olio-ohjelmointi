#include "person.h"

int Person::getAge() const
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &newName)
{
    name = newName;
}

void Person::printInformation()
{
    cout<<"name= "<<name<<", ika= "<<age<<endl;
}

Person::Person() {}
