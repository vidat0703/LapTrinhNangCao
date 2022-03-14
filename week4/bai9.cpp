#include<bits/stdc++.h>

using namespace std;

void sort(float array[], int size, bool isAscending){
	for (int i=0; i<size; i++){
		cin >> array[i];
	}
	float sw;
	if( isAscending == true){
		for(int i=0; i<size-1; i++){
			for(int j=i+1; j<size; j++){
				if( array[i] > array[j]){
					sw = array[i]; 
					array[i] = array[j];
					array[j] = sw;
				}
			}
		}	
	}
	else{
		for(int i=0; i<size-1; i++){
			for(int j=i+1; j<size; j++){
				if( array[i] < array[j]){
					sw = array[i]; 
					array[i] = array[j];
					array[j] = sw;
				}
			}
		}	
	}
	for(int i=0; i<size; i++){
		cout << fixed << setprecision(2)<< array[i] << " ";
	}
}
int main() {
	int n;
	cin >>n;
	float arr[n];
	sort(arr, n , false);
}
