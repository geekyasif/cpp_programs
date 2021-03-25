// ************Program to arrange an array in ascending or descending order using selection sort algorithm******************
#include<iostream>
using namespace std;

int main(){
	
	int arr[5] = {1,2,3,4,5};
	int i,j,temp,max;
	
	for(i=0; i<5; i++){
		max = i;
		for(int k=i+1; k<5; k++){
			
			if(arr[k] > arr[max]){
				max = k;
			}
		}
		
		if(max != i){
			temp = arr[max];
			arr[max] = arr[i];
			arr[i] = temp;

		}
	}
	
	for(j=0; j<5; j++){
		cout<<arr[j]<<endl;
	}
	return 0;
}
