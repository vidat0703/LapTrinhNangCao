#include<bits/stdc++.h>
using namespace std;

int main(){
	string st;
	getline(cin , st);
	int i=0;
	while(st[i] == ' '){
		if(st[i] ==' ')
			i++;
		else{
			break;
		}
	}
	if(i != 0)
		for(int k=0; k<i; k++){
			cout <<" ";
		}
	for(int k=i; k<st.size(); k++){
		if( st[k] == ' ' && st[k+1]==' ')
			i++;
		else
			cout<< st[k];
	}
}
