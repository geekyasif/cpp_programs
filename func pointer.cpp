#include<iostream>

using namespace std;

int add(int *x, int *y);

int main(){
	 
	 // ****************************** Passing Pointer to a function *****************
	 		   
	 		   int a,b;
	 		   cout<<"enter two nnumbers : ";
	 		   cin>>a>>b;
	 		   
	 		   int sum;
	 		   sum = add(&a,&b);
	 		   
	 		   cout<<"add of two num is : "<<sum;;
	 		   
	 		   
	
}


int add(int *x, int *y){
	int c;
	c = *x + *y;
	return c;
	
}
