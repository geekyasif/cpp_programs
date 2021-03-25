#include<iostream>

using namespace std;

class complement
{
   private :
     int a,b;
	 
	public : 
	  
	  void setData(int x, int y){
	  	     a = x;
	  	     b = y;
	  } 
	  
	  void displayData(void){
	  	cout<<a<<" "<<b<<endl;
	  }	
	  
	  //unary operator use as a function overloading
	  complement operator-(){
	  	 complement temp;
	  	 temp.a = -a;
	  	 temp.b = -b;
	  	 return temp;
	  }
	  
};


int main(){
	complement c1,c2;
	c1.setData(4,5);
	cout<<"before"<<endl;
	c1.displayData();
 
  // calling the unary operator function overloading in two ways :- 
        // 1 - c1.operator-();
        // 2 - -c1;
	
	c2 =-c1;
	cout<<"after"<<endl;
	c2.displayData();
	
	return 0; 
}
