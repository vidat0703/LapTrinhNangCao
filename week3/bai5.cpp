#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ar[n];
	for (int i=0; i<n; i++){
		cin >> ar[i];
	}
	for(int i=0; i<=n/2 ; i++){
		if(ar[i] != ar[n-1-i]){
			cout <<"Asymmetric array.";
			return 0;
		}
	}
	cout << "Symmetric array.";
	return 0;
}
