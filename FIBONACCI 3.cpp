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
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		vector<int> res;
		for(int i=0 ; i<n ; i++){
			if(check(a[i])){
				res.push_back(a[i]);
			}
		}
		for(int i=0 ; i<res.size() ; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
