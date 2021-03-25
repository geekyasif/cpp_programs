#include<iostream>

using namespace std;

void swap(int ,int);

void swap(int *x, int *y){
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;

}

int main(){

int a = 10 , b = 20;

cout<<"Before swapping the number : "<<a<<" "<<b<<endl;

swap(&a,&b);

cout<<"after swapping the number : "<<a<<" "<<b<<endl;



}
