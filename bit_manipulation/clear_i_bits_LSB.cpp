// program to clear i bits from LSB

#include<bits/stdc++.h>
using namespace std;

void find_bin(int n){
    for(int i=10;i>=0;--i){
        cout << ((n>>i)&1);
    }
}


int main(){
    int n,i;
    cin >> n >> i;
    find_bin(n);
    cout << endl;
    n = (n&(~((1<<(i+1))-1)));
    find_bin(n);

}