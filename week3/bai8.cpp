#include<bits/stdc++.h>
using namespace std;

int main(){
	string st;
	getline(cin , st);
	for(int i=0; i< st.size() ; i++){
		if(st.substr(i, 4) == "Zues"){
			cout << "Zeus ";
			i=i+4;
		}
		else{
			cout << st[i];
		}
	}
	return 0;
}
