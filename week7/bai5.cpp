#include<iostream>

using namespace std;

double* getSquare (double number){
	double* square = new double;
	*square = number*number;
	return square;
}
int main(){
	double a;
	cin >> a;
	double *p;
	p = getSquare(a);
	cout << *p;
}
