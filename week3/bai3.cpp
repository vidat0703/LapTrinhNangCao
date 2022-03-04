#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k, f=1;
	cin >> n;
	int arr[n];
	for( int i=0; i<n; i++){
		cin >> arr[i];
	} 
	int arr2[1000];
	arr2[0] = arr[0];
	for(int i=1; i<n; i++){
		for(int j=0; j< n; j++){
			if( arr[i] == arr2[j]){
				k=0;
				break;
			}
			else
				k=1;
		}
		if(k==1){
			arr2[f] = arr[i];
			f++;
		}
	}
	int sw;
	for(int i=0; i< f-1; i++){
		for(int j=i+1; j<f; j++){
			if( arr2[i] > arr2[j] ){
				sw = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = sw;
			}
		}
	}
	for(int i=0; i<f; i++){
		cout << arr2[i]<< " ";
	}
}
