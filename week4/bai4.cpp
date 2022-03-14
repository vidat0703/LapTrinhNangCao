#include<bits/stdc++.h>

using namespace std;

long long int factorial(int n){
	long long int a=1;
	if( n == 0){
		return 0;
	}
	if( n ==1){
		return 1;
	}
	for(int i=2; i<=n; i++){
		a = a*i;
	}
	return a;
}
int main(){
	int n;
	cin >>n;
	cout << factorial(n);
	
}
