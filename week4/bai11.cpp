#include<bits/stdc++.h>

using namespace std;

string pigLatin(string word){
		if( word[0] != 97 && word[0] != 101 && word[0] != 105 && word[0] != 111 && word[0] != 117){
			char s = word[0];
			for(int i=0; i< word.size()-1; i++){
				word[i]= word[i+1];
			}
			word[word.size()-1] = s;
			word = word + "ay";
		}
		else{
			word = word + "way";
		}
	return word;
}
int main() {
	string word;
	cin >> word;
	cin.ignore();
	cout << pigLatin(word);
}
