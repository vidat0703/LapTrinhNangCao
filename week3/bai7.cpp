#include<bits/stdc++.h>
using namespace std;
int main(){
	string ar;
	int countAlpha =0, countNumber=0, countOther=0;
	getline(cin, ar);
	for(int i=0; i< ar.size(); i++){
		if( isalpha( ar[i]))
			countAlpha++;
		else{
			if( isdigit( ar[i]))
				countNumber++;
			else
				countOther++;
		}
	}
	cout << countAlpha <<" " << countNumber <<" "<< countOther;
}
