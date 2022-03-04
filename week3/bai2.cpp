#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	double a[1000];
	for( int i=0; i<n; i++)
		cin >> a[i];
	double ac;
	for(int i=0; i< n-1; i++){
		for(int j=i+1; j<n; j++){
			if( a[i] < a[j]){
				ac = a[i];
				a[i]= a[j];
				a[j]=ac;
			}
		}
	}
	for (int i=0 ;i<n; i++){
		cout << fixed << setprecision(2) << a[i] << " ";
	}
}
