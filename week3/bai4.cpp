#include<bits/stdc++.h>

using namespace std;

void themPT(double a[], int &n, double val, int pos){
	for(int i=n; i> pos; i--){
		a[i] = a[i-1];
	}
	a[pos] = val;
	n++;
}

int main() {
	int n;
	cin >> n;
	double arr[1000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	double num;
	cin >> num;
	if(num > arr[n-1]){
		themPT(arr, n, num, n);
	}
	if(num < arr[0]) {
		themPT(arr, n, num, 0);
	}
	for(int i=0; i<n; i++){
		if(num > arr[i] && num < arr[i+1]){
			themPT(arr, n, num, i+1);
			break;
		}
	}
	for( int i=0; i<=n; i++){
		cout << fixed << setprecision(2) << arr[i] << " ";
	}
} 
