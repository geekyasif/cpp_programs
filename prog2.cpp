// *************************** Program to find min and max in an arrray********************************
#include<iostream>
using namespace std;

int main(){
	
	int a[4] = {1,3,100,0};
	int small = a[0];
	int large = a[0];
	
	
	for(int i =1; i<4; i++){
		
		if (a[i] > large){
			large = a[i];
		}
	
		if( a[i] < small){
			small = a[i];
		}
		
	
	}
	
	cout<<"Smaller number is : "<<small<<endl;
	cout<<"larger number is : "<<large<<endl;
	
	
	return 0;
}
