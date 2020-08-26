/*
    Write a C++ program to check whether given length of
    three side form a right triangle.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int side1,side2,side3,a,b,c;
    cout<<"Input side 1: ";
    cin>>side1;
    cout<<"Input side 2: ";
    cin>>side2;
    cout<<"Input side 3: ";
    cin>>side3;
    a = side1*side1;
    b = side2*side2;
    c = side3*side3;
    if((a+b == c) || (b+c == a) || (c+a == b))
        cout<<"Right triangle possible"<<endl;
    else
        cout<<"No right triangle possible"<<endl;

return 0;
}
