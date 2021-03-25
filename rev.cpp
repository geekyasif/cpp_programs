#include<iostream>
using namespace std;

int main(){
	
	int a = 315;
	int rev = 0;
	int rem;
	while (a !=0 ) {
		
		rem = a%10;
		rev = (rem+rev)*10;
		a = a/10;
	
	}
	
	cout<<"reversed of number is " << rev; 
	
	return 0;
}
