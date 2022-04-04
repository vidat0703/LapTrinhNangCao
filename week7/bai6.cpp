#include<iostream>

using namespace std;


int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
	int *p = new int[lenArr1+lenArr2];
	int index =0;
	for (int i=0; i< lenArr1; i++){
		*(p+index) = *(firstArr+i);
		index++;
	}

	for(int i=0; i<lenArr2; i++){
		*(p+index) = *(secondArr+i);
		index++;
	}
	for(int i=0; i<index+1; i++){
		for(int j= i+1; j<index; j++){
			if( *(p+i) > *(p+j)){
				int * a;
				*a = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = *a;
			}
		}
	}
	return p;
}

int main(){
	int n;
	cin >>n;
	int t;
	cin >>t;
	int *a = new int[n];
	int *b = new int[t];
	for(int i=0; i< n; i++){
		cin >> *(a+i);
	}
	for(int i=0; i<t; i++){
		cin >> *(b+i);
	}
	int *p = new int[n+t];
	p = merge( a, n, b, t);
	for(int i=0; i< n+t; i++){
		cout << *(p+i) << " ";
	}
}
