#include <iostream>
#include "citizen.h"

using namespace std;

int main()
{
    Citizen c1;  //constructor without parameter
    c1.sayHello();
    c1.sayName();
    char cityzen_name[] = "People";
    Citizen c2(cityzen_name,GERMAN);
    c2.sayHello();
    return 0;
}
