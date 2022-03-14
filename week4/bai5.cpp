#include<bits/stdc++.h>
using namespace std;

double calculate (double num1, char operat, double num2){
	double kq;
	if( operat =='+'){
		kq = num1+num2;
	}
	if( operat =='-'){
		kq = num1-num2;
	}
	if( operat =='*'){
		kq = num1*num2;
	}
	if( operat =='/'){
		kq = num1/num2;
	}
	return kq;
}
int main(){
	int num1, num2;
	char a;
	cin >> num1 >>  a >>  num2;
	cout << calculate(num1, a, num2);
}
