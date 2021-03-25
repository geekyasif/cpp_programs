#include<iostream>

using namespace std;

union money{
	int price;
	char country;
	float tax;
};

// in union you can access only one variable at a time  

int main(){
	
	union money india;
//       india.country = 'c';
       india.price = 120;
//       india.tax = 90.857;
       
//       cout<<india.country;
       cout<<india.price;
 return 0;
}


