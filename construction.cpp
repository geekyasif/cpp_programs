#include<iostream>

using namespace std;

class assignNum{
	
	private:
		int a,b;
	
	public:
		// this is default constructor it does not take any arguments
		assignNum(){
			cout<<"Contructor is called when an object is created, constructor will call for each objects"<<endl;
		}
		assignNum(int x, int y){    // this is  parameterized constructor 
			
			a = x;
			b = y;
			
		}	
		
		// and this is callled constructor overloading - same function name but different parameters
		assignNum(int x){
			a = x;
		}
		
		// this is copy constrcutor but the systax is wrong because in copy contructor argument is assign with  reference variable
		//		assignNum(assignNum c){  
		//		
		//			a = c.a;
		//			b = c.b
		//		}
		
		//this is right copy constructor 
		assignNum(assignNum &c){
			a = c.a;
			b = c.b; 
		} 
		
		show(){
			cout<<a<<endl;
		}
		
		showNum(){
			cout<<a<<" "<<b<<endl;
		}
};

int main(){
	assignNum c1,a1(4,5),b1(8,9),d1(2); // when an object is called a constructor is automatic called 
	assignNum q1 = a1; // q1(a1)
	q1.showNum();
	a1.showNum();
	b1.showNum();
	d1.show();
	
	return 0;
}

// there are three types of constructors
// 1 default constructor its dont take any arguments
// 2 parameterized constructor it takes arguments
// constructor overloading 
// copy construtor

