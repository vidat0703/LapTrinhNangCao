#include<bits/stdc++.h>

using namespace std;

int main() {
	long long a;
	cin>> a;
	int count=0;
	do{
		a = a /10;
		count++;
	}
	while ( a !=0);
	cout << count;
}
