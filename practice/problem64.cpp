/*
    64. Write a C++ program to compute the sum of the two given integers and
    count the number of digits of the sum value.
*/
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

    int num1,num2,sum,digit=0;
    cout<<"place num1: ";
    cin>>num1;
    cout<<"place num2: ";
    cin>>num2;
    sum = num1+num2;
    cout<< "Sum: " <<sum<<endl;
    while(sum!=0){
        digit++;
        sum = sum/10;
    }
    cout<<"Number of digits in sum: "<< digit;
return 0;
}
