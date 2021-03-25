#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string str = "mohammad";
	string substr = "amma";
	   int i =0 , j = 0;
	 while(str[i] != '\0') {
	 	 
		   while(substr[j]!= '\0'){
          	 cout<<substr[j];
          	 j++;
			 
		  }
		  cout<<str[i];
	      i++;
		   
		  
		  
	     
	            
	 }	 
	return 0;
	
}
