#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
const long long int mod = 1e9+7;
lli gcd(lli a, lli b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

lli lcm (lli a, lli b){
	return a*b/gcd(a,b);
}

lli mul(lli x, lli y){
	if(x == 0) return 0;
	if(y == 0) return 1;
	
	if(y % 2 == 0){
		return (mul(x,y/2)*mul(x,y/2))%mod;
	}
	return x * (mul(x,y/2)*mul(x,y/2)%mod)%mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
		lli a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		lli hx=a[0];
		lli gx = a[0];
		for(int i=1 ; i<n ; i++){
			hx = (hx * a[i])%mod;
			gx = gcd(gx,a[i]);
		}
		cout << mul(hx,gx) << endl;
	}
	return 0;
}