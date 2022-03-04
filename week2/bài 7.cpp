#include<bits/stdc++.h>
using namespace std;
float fun(int x) {
    float sum = 1;
    int i = 1;
    float temp = x;
    while ( temp > 1e-10 ) {
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    return sum;
}
 
int main(){
    int n;
    cin >>n;
    cout << fixed << setprecision(4) << fun(n);
}
