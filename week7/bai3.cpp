#include<iostream>

using namespace std;


void swap(int* px, int* py) {
	int c;
	c = *px;
	*px = *py;
	*py = c;
}
int main() {
	int a = 20;
	int b = 25;
	swap(&a, &b);
	cout << a << " " << b;
	return 0;
}
