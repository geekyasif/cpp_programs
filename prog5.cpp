// ************************Program to find a number in dynamic array************************
#include<iostream>
#include<math.h>
using namespace std;

int main(){

	int n,ar,i,k;
	
	cout<<"Enter the size of array you want to make : ";
	cin>>ar;
	
	int *arr = new int(ar);
	
	for(k=0;k<ar;k++){
		cin>>arr[k];
	}
		
	cout<<"Enter Number To Find : ";
	cin>>n;
	
	for (i = 0; i<ar; i++){
		if(n == arr[i]){
			cout<<"Number Found!";
			break;
		}	
		
		if(arr[i] == ar-1){
			cout<<"Number not Found!";
			break;
		}
	}
	return 0;
}
