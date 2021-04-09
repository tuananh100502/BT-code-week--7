#include <iostream>
using namespace std;
char* weird_string() {
 char c[] = “123345”;
 return c; 
}
int main(){
	char* c=new char[20];
	c=weird_string();
	cout << c;
	return 0;
}
//khong the output vi truy cap ko hop le
