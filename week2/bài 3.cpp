 #include<bits/stdc++.h>

using namespace std;

int main() {
    int lowerBound, upperBound, a;
	cin >> lowerBound >> upperBound;
	for (int i= sqrt(lowerBound); i<= sqrt(upperBound); i++){
		if( i*i >= lowerBound && i*i <= upperBound)
			cout << i*i<< " ";
	}
}
