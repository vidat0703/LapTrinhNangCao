#include<bits/stdc++.h>
using namespace std;

int main(){
	string ar;
	getline(cin , ar);
	if( ar.size() <6 || ar.size() >15 ){
		cout<< "Invalid username.";
		return 0;
	}
	if( isdigit(ar[0]) == true){
		cout <<"Invalid username.";
		return 0;
	}
	for(int i=0; i<ar.size(); i++){
		if( isdigit(ar[i]) == false && isalpha(ar[i]) ==false){
			cout <<"Invalid username.";
			return 0;
		}
	}
	cout << "Valid username.";
	return 0;
}
