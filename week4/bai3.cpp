#include<bits/stdc++.h>

using namespace std;

void printArrow(int n, bool left){
	if( left ==0){
	for(int i=0; i<n; i++){
		for(int k=0; k< n+i ; k++){
			if( k < 2*i){
				cout << " ";
			}
			else 
				cout << "*";
		}
		cout << endl;
	}
	for(int i=n-2; i>= 0; i--){
		for(int k=0; k< 2*n ; k++){
			if( k < 2*i || k >= n+i){
				cout << " ";
			}
			else 
				cout << "*";
		}
		cout << endl;
	}
}
else{
	for(int i=-(n-1); i <=(n-1); i++){
		for(int k=0; k< 2*n-1; k++){
			if( k< abs(i) || k > 2*abs(i)){
				cout << " ";
			}
			else
				cout << "*";
		}
		cout << endl;
	}
}
}

int main() {
	int n;
	bool left;
	
	cin >> n;
	cin >> left;
	printArrow(n, left);
}
