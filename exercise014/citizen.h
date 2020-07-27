#ifndef CITIZEN_H
#define CITIZEN_H

enum language {ENGLISH, GERMAN, DUTCH};

class Citizen{

    public:
        int age;
        language citizen_language;
        char _itsName[70];
        void sayHello();
        Citizen(char citizen[], language lan);      //constructor with parameter
        Citizen();                                  //empty constructor
        void sayName();
};
#endif

