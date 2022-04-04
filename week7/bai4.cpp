#include<iostream>

using namespace std;

int* getPointerToArray(int n){
	int* p=	new	int[n];
	for(int i=0; i<n; i++){
		cin >> p[i];
	}	
	return p;
}
int main(){
	int n;
	cin >> n;
	int *p;
	p = getPointerToArray(n);
	for(int i=0; i<n; i++){
		cout << *(p+i);
	}
}
