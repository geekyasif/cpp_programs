#include<iostream>
#inlcude<conio.h>

using namespace std;

inline int max(int x, int y){
	return (x > y) ? x: y;
}

inline int add(int x, int y){
	return (x+y);
}

int main (){
//	int a,b;
	cout<<"Greater number in 8 and 55 is : "<<max(55,8)<<endl;
	cout<<"Greater number in 83 and 5 is : "<<max(5,83)<<endl;
	
	cout<<"sum of 8 and 55 is : "<<add(55,8)<<endl;
	cout<<"sum of 83 and 55 is : "<<add(55,83)<<endl;
	getch();
	return 0;
}
