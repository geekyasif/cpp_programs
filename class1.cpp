#include<iostream>

using namespace std;

class test
{
	private :
		int a , b;
		
		// you can define function inside the class like this
	public :
		void assign(int x, int y){
	      a = x;
	      b = y;
        }
		
		void display(void){
	   	  cout<<"The value of a is : "<<a<<" and The value of b is : "<<b;
        }	
};

/*
   // you can define function inside the class or outside the class like this but when definig the function outside the class 
   //    you have to fisrt declare the function inside the class 
	void test :: assign(int x, int y){
	      a = x;
	      b = y;
        }
		
	void test :: display(void){
	   	  cout<<"The value of a is : "<<a<<" and The value of b is : "<<b;
        }
*/

int main(){
	
	test t1;
	
	/*
	  private function can not directly access or initialize like this you have to
	   use class function to access through passing arguments
	
	t1.a(3);
	t1.b(9);
	
	*/
	
	t1.assign(4,5);
	t1.display();
	return 0;
}
