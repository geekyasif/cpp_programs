#include<iostream>
#include<cstring>

using namespace std;

struct book{
	int book_id;
	char book_title[30];
	float book_price;
};

int main (){
	 
	 struct book b1 = {132,"cpp by harry",390.09};
	 cout<<b1.book_id<<endl;
	 
	 struct book b2,b3;
	 b2.book_id = 223;
	 b2.book_price = 289.98;
	 
	 cout<<b2.book_id<<endl;
	 cout<<strcpy(b2.book_title,"hello book cpp")<<endl;
	 cout<<b2.book_price<<endl;
	 
	 b2 = b3;
	 
	 cout<<b3.book_title<<endl;
	 
	 return 0;
	
}
