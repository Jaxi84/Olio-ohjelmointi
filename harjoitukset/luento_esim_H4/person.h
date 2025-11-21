#ifndef PERSON_H
#define PERSON_H

#include "address.h"
//unique_ptr tarvii memoryn
#include <memory>

class Person
{
private:
    //1-tehtävä
    //automaattinen olio, pino muistiin
    //refactor > include
    //Address objAddress;
    //2-tehtävä sama unique_ptr:llä "vahva kooste"
    unique_ptr<Address> objAddress;

    string name;
public:
    Person(string);
    //refactor > include
    void tulostaTiedot();
    ~Person();
};

#endif // PERSON_H
