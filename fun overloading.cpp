#include<iostream>
using namespace std;

int add(int x, int y){
	return (x+y);
}

float add(float x, float y){
	return (x+y);
}

double add(double x, double y){
	return(x+y);
}

int main(){
	int a,b;
	cout<<"sum of int is : "<<add(5,7)<<endl;
	cout<<"sum of float is : "<<add(5.9,7.6)<<endl;
	cout<<"sum of double is : "<<add(532,4437)<<endl;
	return 0;
}
