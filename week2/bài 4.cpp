#include<bits/stdc++.h>

using namespace std;

int main() {
    int total, foot;
    cin>> total >> foot;
    int dog, chicken;
    for(int i=0; i<=total; i++){
    	dog=i;
    	chicken= total -i;
    	if(dog*4 + chicken*2 == foot){
    		cout << "chicken = " << chicken << ", dog = "<< dog;
    		return 0;
		}
	}
	cout << "invalid";
}
