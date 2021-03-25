#include<iostream>
using namespace std;

class complex
{
  private :
    int a,b;
  
  public :
    void SetData(int x, int y){
    	a = x;
    	b = y;
	}	
	
	friend complex sum(complex s1,complex s2);
	
	void DisplayData(void){
		cout<<a<<" + "<<b<<"i"<<endl;
	}	
	

};

complex sum(complex s1,  complex s2){
	  complex temp;
//	  temp.a = (s1.a + s2.a);
//	  temp.b = (s1.b + s2.b);

		temp.SetData((s1.a + s2.a), (s1.b + s2.b));
	  return temp;
}


int main(){
	complex c1,c2,c3;
        c1.SetData(3,9);
		c1.DisplayData();
		
		c2.SetData(7,5);
		c2.DisplayData();
		
		c3 = sum(c1,c2);
		c3.DisplayData();
		return 0;	
}
