#include<iostream>

using namespace std;

int main(){
	
	int a[5] = {1,2,3,4,5};
	int b[5];
	int i, j;
	j = 4;
	for(i =0 ; i<5; i++){
		b[j] = a[i];
		j--;
	}
	
	for(i = 0; i<5; i++){
		cout<<b[i]<<endl;
	}
	
	return 0;
}
