#include <iostream>
#include "array.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    Array a1;
    a1.displayArray();
    cout<<"Average "<<a1.arrayAverage()<<endl;

    cout<<"Max "<<a1.displayMax()<<endl;
    cout<<"Min "<<a1.displayMin()<<endl;
    cout<<"Variance "<<a1.arrayVariance()<<endl;

return 0;
}

