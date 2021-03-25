#include<iostream>

using namespace std;

const int MAX = 3;
int main(){
    
    // ********************** Array of Pointer *******************
    
		    int arr[3] = {100,200,300}; 
		    
			  for(int i = 0; i < MAX; i++){
			            cout<<arr[i]<<endl;
		     	  }
		      
		      int *ptr = arr;
		      
		      for (int j = 0; j < MAX; j++ ){	
			  cout<<"value of pointer array is : ";
					cout<<*(ptr+j)<<endl;
			      
			  }
		    
	     
	     
	 
	
}

