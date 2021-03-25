#include<iostream>

// using namespace std;

int main(){

int *ptr, x=10;
    ptr = &x;

    // to print the address o variable through pointer
    cout<<"address of ptr : "<<ptr<<endl;

    // to print the address of variable through normal variable
    cout<<"address of x : "<<&x<<endl;

    // to print the value of normal variable
    cout<<"value of x : "<<x<<endl;

    // to print the value of variable through pointer variable
    cout<<"value of ptr : "<<*ptr<<endl;

    return 0;
}
