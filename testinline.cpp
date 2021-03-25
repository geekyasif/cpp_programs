#include<iostream>
using namespace std;

class sum {
	private:
		int a,b;
	public:
		void getnum(int x, int y){
			 a=x, b=y;
		}	
		
		void disNum(void){
			cout<<"sum is "<<a+b;
		}
};
int main(){
	sum obj;
	obj.getnum(3,4);
	obj.disNum();
	return 0;
}
