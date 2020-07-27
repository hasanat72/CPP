#include "array.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using std::cout;
using std::endl;

Array::Array(){

    srand((unsigned) time(0));
    unsigned int randomNumber = rand();

    for(int i=0;i<20;i++){
        unsigned int randomNumber = rand()%99;
        _thisArray[i] = randomNumber;
    }

}

float Array::arrayAverage(){

    float average = 0.0, sum = 0.0;
    for(int i=0; i<20; i++){
        sum = sum + _thisArray[i];
    }
    //cout<<"Average of the sum is :" << sum/20 <<endl;
    average = sum/20;
    return average;
}

void Array::displayArray(){

    for(int i=0;i<20;i++){
        cout<< _thisArray[i]<< "  ";
    }
    cout<<endl;
}

int Array::displayMin(){

    unsigned int minimum = _thisArray[0];
    for(int i=0;i<20;i++){
        if( minimum > _thisArray[i]){
                minimum = _thisArray[i];

        }

    }
return minimum;
}

int Array::displayMax(){
    unsigned int maximum = _thisArray[0];
    for(int i=0;i<20;i++){
        if( maximum < _thisArray[i]){
                maximum = _thisArray[i];

        }

    }
return maximum;
}

float Array::arrayVariance(){
    float variance = 0.0;
    for(int i=0;i<20;i++){
        variance = variance + pow(_thisArray[i] - arrayAverage(), 2);

    }

return variance/20;
}
