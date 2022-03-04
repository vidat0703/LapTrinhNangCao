#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	double arr[1000];
	double sum=0;
	for(int i=0 ; i<n; i++){
		cin >> arr[i];
		sum= sum + arr[i];
	}
	double mean= sum/n;
	double sum2;
	for(int i=0; i<n; i++){
		sum2 = sum2 + (arr[i] - mean)*(arr[i]- mean);
	}
	double kq = sum2/n;
	cout << setprecision(2)<< fixed<< kq;
}
