#include "Animal.h"
#include "Dog.h"
#include <iostream>

using namespace std;

int main()
{
    Animal* animal = new Animal();
    Animal* dog = new Dog();

    animal->callOut();
    dog->callOut();

    delete animal;
    animal=nullptr;
    delete dog;
    dog=nullptr;

    return 0;
}
