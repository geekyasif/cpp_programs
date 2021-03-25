#include<iostream>

using namespace std;

int *arr(){
	int arr[10] ={1,2,3,4,5,6,7,8,9,10};
	
	for(int i = 0; i< 10; i++){
		cout<<" before return arr is "<<arr[i]<<endl;
	}
	return arr;
}

int main(){
	
	int *ptr;
	
	ptr = arr();
	
	for(int i = 0; i< 10; i++){
		cout<<"after return arr is "<<*(ptr+i)<<endl;
	}
	
}
