//swap both the element without using arathmatic operators

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a , b;
	cin >>  a >> b;

	a = a^b;  //first delaration
	b = b^a;  // b = b^a = b^(a^b) = b^b^a = 0^a = a
	// hence b is now equal to a and we have done one part of the swapping
	a= a^b;
	// now a = a^b = (a^b)^(a) = a^a^b = 0^b = b
	// hence we swapped both the element  

	cout << "new value of a is:- "<<a;
	cout << endl;
	cout << "new value of b is:- "<<b;
}