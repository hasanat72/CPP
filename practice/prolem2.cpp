/*

w3resources 61
Write a C++ program to swap first and last digits of any number.
Sample Output:
Input any number: 12345
The number after swapping the first and last digits are: 52341

*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int digit(int num){
    int digit = 0;
    while(num%10 != 0){

        num = num/10;
        digit++;
    }
    return digit;
}

int main(){
    int num, i = 0;

    cout<< "Enter number ";
    cin>>num;
    int numDigit = digit(num);
    int number[numDigit];

    for(int i = numDigit; i>=0; i--){
        number[i-1] = num%10;
        num = num/10;
    }
    int last, first,temp;
    last = number[numDigit-1];
    first = number[0];
    number[0] = last;
    number[numDigit-1] = first;

    for(int i = 0; i<numDigit; i++){
        cout<< number[i]<< " ";
    }


return 0;
}
