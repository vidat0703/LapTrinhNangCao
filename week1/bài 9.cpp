#include<bits/stdc++.h>

using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b>> c;
    if( a+b<= c || a+c <=b || b+c<=a|| a*b<=0 || b*c<=0|| a>= 1000 || b>= 1000 || c>=1000){
    	cout<< "invalid";
    	return 0;
	}
    float p=((a+c+b)*1.0)/2;
    float s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(2) << s;
}
