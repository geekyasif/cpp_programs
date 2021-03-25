#include<iostream>
#include<string>
#include <bits/stdc++.h> 
using namespace std;
int main() {
	int a[5] = {1,3,-9,12,0};
	int i,j,temp,small;
	
	for(i=0; i<5; i++){
		
		small = i;

		for(j=i+1; j<5; j++){
			
			if(a[j] < a[small]){
				small = j;
			}		
		}
		
		if(small != i){
			temp = a[small];
			a[small] = a[i];
			a[i] = temp;
		}
	}
	
	
	for(int k = 0; k<5; k++){
		cout<<a[k];
	}
}
