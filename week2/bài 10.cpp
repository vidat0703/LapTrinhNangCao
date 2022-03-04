#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	double arr[1000], arr1[1000];
	for(int i=0 ; i<n; i++){
		cin >> arr[i];
	}
	for( int i=0; i< n; i++){
		cin >> arr1[i];
	}
	double sum=0;
	for(int i=0; i<n; i++){
		sum = sum + arr[i]*arr1[i];
	}
	cout <<fixed << setprecision(2) << sum;
}
