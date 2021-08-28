#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli fib(int x){
	lli f[x+1] = {0};
	f[0] = 0;
	f[1] = 1;
	for(int i=2 ; i<x+1 ; i++){
		f[i] = f[i-1] + f[i-2];
	}
	return f[x];
}

bool check(lli n){
	for(int i=0 ; fib(i) <= n; i++){
		if(fib(i) == n){
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
		if(check(n)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
