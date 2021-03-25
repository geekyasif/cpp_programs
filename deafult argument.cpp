#include<iostream>

using namespace std;

//int add(int,int,int);
int add(int x, int y=6, int z = 5){
	return (x+y+z);
}

int main(){
	
	int a,b,c;
	
	cout<<"Enter two nnumbers ";
	cin>>a>>b;
	
	cout<<"\nsum is : "<<add(a,b);
	 
	cout<<"\nenter three numbers : ";
	cin>>a,b;
	
	cout<<"\nsum of three is : "<<add(a,b,7); 
	return  0;
	
}




//#include<iostream> 
//using namespace std; 
//  
//// A function with default arguments, it can be called with  
//// 2 arguments or 3 arguments or 4 arguments. 
//int sum(int x, int y, int z=0, int w=0) 
//{ 
//    return (x + y + z + w); 
//} 
//  
///* Driver program to test above function*/
//int main() 
//{ 
//    cout << sum(10, 15) << endl; 
//    cout << sum(10, 15, 25) << endl; 
//    cout << sum(10, 15, 25, 30) << endl; 
//    return 0; 
//}
