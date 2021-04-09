#include <iostream>
using namespace std;
void count_even(int* arr,int length){
	cout <<"Cac so chan trong mang la :";
	for(int i=0;i<length;i++){
		if(arr[i]%2==0) cout << arr[i]<< " ";
}
}
int main(){
	int arr[20];
	int length =sizeof(arr)/sizeof(int);
	for(int i=0;i<length;i++){
		cin >> arr[i];
	}
	count_even(arr,length);
	return 0;
}

