#include<bits/stdc++.h>
using namespace std;

int main () {
	string ar;
	int num_word=0;
	getline(cin, ar);
	ar = ' ' + ar;
	for(int i=0; i< ar.size(); i++){
		if( ar[i] ==' ' && ar[i+1] != ' '){
			num_word++;
		}
	}
	cout << num_word;
	
}
