#include "person.h"
#include <iostream>

using namespace std;

int main()
{
    Person objPerson;
    objPerson.setName("Tess Tester");
    objPerson.setAge(32);
    objPerson.printInformation();
    return 0;
}
