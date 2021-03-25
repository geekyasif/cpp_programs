#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s="Asif";
	int i;
	for(i=0;i<s.length();i++){
		int small;
		s[small]= s[i];
		
		for(int j = i+1; j<=s.length();j++){
			if(s[j]<s[small]){
				s[small] = s[j];
			}
			
				int temp;
			if(s[i] != s[small]){
			
				temp = s[i];
				s[i] = s[small];
				s[small] = s[i];
				
			}
		}
	
	}
	
	for(int k=0; k<s.length(); k++){
		cout<<s[k];
	}
	return 0;
}
