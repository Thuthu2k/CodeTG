#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli solve(int n){
	lli a[n+1];
	a[0] = 0;
	a[1] = 1;
	for(int i=2 ; i<=n ; i++){
		a[i] = a[i-1] + a[i-2];
	}
	return a[n];
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
