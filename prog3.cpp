// ****************** Programm to reverse an array******************************
#include<iostream>
using namespace std;

int main(){
	
	int a[4] = {1,2,3,4};
	int temp,i,j;
	
	for(i=0, j=3; i<j; i++, j--){

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

	}
	
	for(int k = 0; k<4; k++){
		cout<<a[k]<<endl;
	}
	

	return 0;
}
