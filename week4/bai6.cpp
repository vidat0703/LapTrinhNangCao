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
	kq = round(kq * 100) / 100;
	return kq;
}
int main(){
	cout << calculate(2, '+', 4)<< endl;
	cout << calculate( 3 , '-', 2) << endl;
	cout << calculate( 5,'/', 3) << endl;
	cout << calculate( 2, '*', 4) << endl;
	
}
