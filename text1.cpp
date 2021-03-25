#include<iostream>
#include<string>
using namespace std;

int main(){
	 int l = 0;
	 string str;
	 int c=0;
	 int k;
	 
	 cout<<"enter a string";
	 cin>>str;
	 
	 for(k =0; str[k] !='\0'; k++){
	 			c = k;
	 }
	 cout<<c;

for(int i = c; i>=0; i--){
	cout<<str[i];
}
cout<<endl;
int num[] = {1,2,3,4,5};
for(int j = 4; j>=0; j--){
	cout<<num[j];
}
	
	return 0;
}
