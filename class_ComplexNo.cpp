#include<iostream>
using namespace std;

/*
  3 + 4i;
  4 + 5i;
  _________
  7 + 9i
*/ 

class complex
{
   private :
     int a,b;
	 
	public :
	 void SetData(int x, int y){
	 	 a = x;
	 	 b = y;
	 } 	
	 
	 complex add(complex c){
	 	 complex temp;
		  temp.a = (a + c.a );
		  temp.b = (b + c.b);
	    return temp;
	 }
	 
	 void DisplayData(void){
	 	cout<<a<<" + "<<b<<"i"<<endl;
	 }
};


int main(){
	
	complex c1,c2,c3;
	
	c1.SetData(3,4);
	c1.DisplayData();
	
	c2.SetData(4,5);
	c2.DisplayData();
	
	c3 = c1.add(c2);
	c3.DisplayData();
	
	return 0;
}
