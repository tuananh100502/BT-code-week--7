#include <iostream>
using namespace std;
double H(int N) {
 if (N == 1) return 1.0;
 return H(N) + 1.0/N; 
}
int main(){
	int N;
	cin >> N;
	H(N);
}
//Loi cong thuc de quy
