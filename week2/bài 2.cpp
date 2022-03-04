#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >>n;
    if( n < 7)
    	return 0;
    else{
    for(int i = 7; i <= n; i++){
    	if( i % 7 == 0)
    		cout << i <<" ";
	}}
}
