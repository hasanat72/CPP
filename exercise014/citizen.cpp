#include "citizen.h"
#include <iostream>


using std::cin;
using std::cout;
using std::endl;


Citizen::Citizen(){

    age = 0;
    char name[] = "Anonymous";
    int i = 0;
    while((i<70) && (name[i]!= '\0')){
        _itsName[i] = name[i];
        i++;
    }
    _itsName[++i] = '\0';
    citizen_language = DUTCH;

}

Citizen::Citizen(char citizen[],language lan){
    citizen_language = lan;
    int i = 0;
    while((i<70) && (citizen[i]!= '\0')){
        _itsName[i] = citizen[i];
        i++;
    }
    _itsName[++i] = '\0';

}

void Citizen::sayHello(){

    switch(citizen_language){

        case GERMAN:
            cout<<"Hallo"<<endl;
            break;
        case DUTCH:
            cout<<"Goeiedag"<<endl;
            break;
        case ENGLISH:
            cout<<"Hi there"<<endl;
            break;
        default:
            cout<<"No Output"<<endl;
            break;

    }

}

void Citizen::sayName(){
    int i = 0;
    while((i<70) && (_itsName[i] != '\0')){
        cout<<_itsName[i];
        i++;

    }
    cout<<endl;
}
