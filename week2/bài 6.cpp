#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=-n; i<= n; i++){
    	for(int k=-n; k<=n ; k++){
    		if(i <=0){
    		if (k >= -(n + i) && k <= n + i){
                cout<<"* ";
            }
			else
                cout<<". ";
            }
            else{
            if( k >= -(n-i) && k<= n-i)
            	cout <<"* ";
            else
            	cout <<". ";
		}
	}
		cout << endl;
	}
}
