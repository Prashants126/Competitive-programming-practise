//program to check for number that is unique and doesnt repeated

//sample input 
// 5
// 1 3 1 4 3

// Sample Output 
// 4

#include<bits/stdc++.h>
using namespace std;

int main(){

	// driver code to take testcase input
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}

	// code to elemenate the number whoes not repeated 

	int ans = 0;
	for(int j = 0; j<n;j++){
		ans = ans^a[j];
	}

	cout << ans;



}