// ******************** Program to reverse a number ***************************
#include<iostream>
using namespace std;

int main(){
	
	int num;
	int rev=0;
	int rem;
	
	cout<<"Enter a number : ";
	cin>>num;

	while(num!=0){
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}

	cout<<"Reverse of the number is : "<<rev;
	return 0;
}
