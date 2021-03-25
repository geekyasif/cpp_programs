#include<iostream>
using namespace std;

int main(){
	
	int arr[5] = {6,2,3,6,5};
	int j,first,second;
	first = arr[0];
	for (int i =0; i<5; i++){
		
		if(arr[i]> first){
			second = first;
			first = arr[i];
		}
		
		if(arr[i] > second && arr[i]<first){
			second = arr[i];
		}
		
	}
	
	cout<<first<<endl;
	cout<<second;
	return 0;
}
