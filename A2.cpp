#include <iostream>
using namespace std;
void printAddressofArray(int* arr,int length){
	for(int i=0;i<length;i++){
		cout << "Dia chi cua phan tu thu" << i+1 << "sau khi truyen vao mang la :" << &arr[i]<< endl;
	}
}
int main(){
	int arr[20];
	int length=(sizeof(arr))/(sizeof(int));
	for(int i=0;i<length;i++){
		cout << "Dia chi cua phan tu thu "<< i+1<< "trong ham main la : " << &arr[i] << endl;
	}

	printAddressofArray(arr,length);
	return 0;
}	
