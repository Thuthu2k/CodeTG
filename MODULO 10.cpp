#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const long long mod = 1e9+7;
lli result(int n, int a[] , int x){
	
	lli res = a[0];
	for(int i=1 ; i<n ; i++){
		res = ((res*x)%mod + a[i])%mod;
	}
	return res;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		cout << result(n,a,x) << endl;
	}
	return 0;
}
