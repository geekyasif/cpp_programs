#include<iostream>

using namespace std;

void swap (int &x, int &y);

int main(){

    int a,b;

    cout<<"Enter two number to swap : ";
    cin>>a>>b;

    cout<<"before swap the number is : "<<a<<" "<<b<<endl;

    swap(a,b);

    cout<<"After swap the number is : "<<a<<" "<<b<<endl;

    return 0;
}

void swap(int &x, int &y) {

      int temp;

      temp = x;
      x = y;
      y = temp;

}
