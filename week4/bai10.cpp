#include<bits/stdc++.h>
using namespace std;

string toLower (string s) {
	for(int i=0; i<= s.size(); i++){
		if( s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] + ((int)('a') - (int)('A'));
		}
	}
    return s;
}
int main(){
	string s= "asAAas asc";
	cout << toLower(s);
}
