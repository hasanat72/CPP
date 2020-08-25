/*
    initialize an array and fill with values two times than the previous value
    create a character array and change value through a function

*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_array(char *a, int arraySize, char newChar){
    for(int i = 0; i< arraySize; i++){
        if(a[i] == 'i' || a[i] == 'I' || a[i] == ' '){
            a[i] = newChar;
        }
    }

}

int main(){
    int Array[14];      // array of 15 elements
    Array[0] = 1;

    for(int i = 1; i<=14; i++){
        Array[i] = Array[i-1]*2;
    }

    /*
    for(int i = 0; i<=14; i++){
        cout<<Array[i]<<endl;;
    }
    */

    char character[] = {'i','a','I','f','g','I','i','I',' '};
    int arrSize = sizeof(character)/sizeof(character[0]);

    for(int i = 0; i< arrSize; i++){
        cout<< character[i]<< " ";
    }

    cout<<endl;
    char newChar = 'C';
    swap_array(character,arrSize,newChar);

    for(int i = 0; i< arrSize; i++){
        cout<< character[i]<< " ";
    }

return 0;
}
