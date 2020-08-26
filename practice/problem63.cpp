/*
    Write a C++ program which prints three highest
    numbers from a list of numbers in descending order.
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int num[] = {10,20,2,3,4,5,6,7,8,1,2};
    int temp,d;
    int arraySize = sizeof(num)/sizeof(num[0]);

    for(int j =0;j<arraySize;j++){
        for(int i = j+1;i<arraySize;i++){
            if(num[j]<=num[i]){
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
     }
    for(int i =0;i<arraySize;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<"No of highest numbers you want to see: ";
    cin>>d;
    for(int i =0;i<d;i++){
        cout<<num[i]<<" ";
    }

return 0;
}
