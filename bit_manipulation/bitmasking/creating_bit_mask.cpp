// Simple program to create a bit mask 
// of a na vector


#include<bits/stdc++.h>
using namespace std;


// normal temprory function to print binary of a number
// it is not mandtory it is just for testing
void find_bin(int n){
	for(int i=10;i>=0;--i){
		cout << ((n>>i)&1);
	}
}

int main(){

	// taking input from user 
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}


	// main logic 
	int mask = 0;
	for(int j=0;j<n;j++){
		int bit = a[j];
		mask = (mask | (1<<bit));
	}

	find_bin(mask);
}