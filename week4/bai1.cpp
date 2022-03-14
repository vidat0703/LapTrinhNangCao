#include<bits/stdc++.h>

using namespace std;

int maxThree(int a, int b, int c){
    if(a >= b && a >=c)
        return a;
    else 
        if(b >=a && b>= c)
            return b;
        else
            return c;
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << maxThree(a, b, c);
}
