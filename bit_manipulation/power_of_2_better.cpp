// to check if a number is a power of two

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;

	if((n&(n-1))==0){
		cout << "true";
	}else{
		cout << "false";
	}
	
}