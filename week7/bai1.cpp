#include<bits/stdc++.h>

using namespace std;

int* getPointerToTen(){
	int* pInt;
	pInt = new int;
	*pInt = 10;
	return pInt;
}
int main(){
	int *t;
	t= getPointerToTen();
	cout << *t;
}
