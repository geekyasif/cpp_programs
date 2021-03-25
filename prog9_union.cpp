#include<iostream>

int main(){
	
	int a[5] = {1,2,3,4,5};
	int b[3] = {2,4,7};
	int c[50];
	
	c[50] = a[5];
	for(int i = 0; i <50; i++){
		
		cout<<c[i];
	}
	return 0;
}
