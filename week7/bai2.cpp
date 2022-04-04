#include<bits/stdc++.h>

using namespace std;
void multiply (int* n, int k){
	*n = (*n) * k;
}
int main() {
	int n=5;
	int k=2;
	multiply(&n, k);
	cout <<n;
}
