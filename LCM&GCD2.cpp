#include<bits/stdc++.h>
using namespace std;

unsigned long long gcd(unsigned long long a,unsigned long long b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

unsigned long long lcm(unsigned long long a,unsigned long long b){
	return a*b/gcd(a,b);
}

unsigned long long result(unsigned long long n){
	unsigned long long ans = 1;
	for(long long i=1 ; i<=n ; i++){
		ans = lcm(ans,i);
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << result(n) << endl;
	}
	return 0;
}
