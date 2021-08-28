#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

long long gcd(long long a,long long b){
	if(b == 0) return a;
	return gcd(b,a%b);
}

long long lcm(long long a, long long b){
	return (a*b)/gcd(a,b);
}

void result(long long bcnn, long long n){
	long long min = pow(10, n-1);
	
	if(bcnn < min*10){
		cout << bcnn*((min-1)/bcnn+1) << endl;
	}
	else cout << -1 << endl;
}


int main(){
	
	int t;
	cin >> t;
	while(t--){
		long long x,y,z,n;
		cin >> x >> y >> z >> n;
		
		long long bcnn = x;
		bcnn = lcm(x, lcm(y,z));
		result(bcnn,n);
		
	}
	return 0;
}
