#include "Dog.h"

Dog::Dog() {}

void Dog::callOut() const
{
    cout<<"Koira haukkuu!"<<endl;
}

Dog::~Dog()
{
    cout<<"Dog olio tuhoutuu"<<endl;
}
