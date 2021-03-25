#include<iostream>

using namespace std;

int main(){
    
   // ****************** Declaring Pointer variable ****************
   
   int a = 3;   // normal variable
   int *ptr;   // pointer variable
   int **pptr;   // pointer vaiable
   
   ptr = &a;   // assing address of a into pointer variable
   pptr = &ptr;  //  pointer to pointer variable to store the address of another pointer variable
   
   
	    cout<<"address of ptr : "<<ptr<<endl;
	    cout<<"address of a : "<<&a<<endl;
	    cout<<"address of pptr : "<<pptr<<endl;
	    
	    cout<<"value of ptr : "<<*ptr<<endl;
  		cout<<"value of pptr : "<<**pptr<<endl;
		cout<<"value of a : "<<a<<endl;
}

