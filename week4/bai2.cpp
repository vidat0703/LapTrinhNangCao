#include<bits/stdc++.h>

using namespace std;
void swap(int& a, int& b){
    int sw;
    sw = a;
    a = b;
    b= sw;
}
int main(){
	int a, b;
cin >> a >> b;
swap(a, b);
cout << a << " " << b;
}
