#ifndef ARAY_H
#define ARAY_H

class Array{

    public:
        Array();  //array initializer
        void displayArray();
        int displayMin();
        int displayMax();
        float arrayAverage();
        float arrayVariance();

    private:
        unsigned int _thisArray[20];


};
#endif // ARAY_H
