#include<iostream>
#include<string>
using namespace std;

int main(){
	string  a = "abcdcdec";
	string b = "ec";
	int i,j,k;
	
	
	for(i= 0 ; i<a.length(); i++){
		for(j = 0; j<b.length();j++){
			
			if (b[j] == a[i]){
				i++;
				j++;
			}
			else{
				j = 0;
				i++;
			}
		}
	}

	if( b[j] == '\0'){
		cout<<"Found at "<<j;
	}else{
		cout<<"not found";
	}
	
	return 0;
}
