#include<bits/stdc++.h>
using namespace std;


int lcm(int a, int b){
	return a*b/__gcd(a,b);
}

int result(int m, int n , int a, int b){
	int min1 = min(m,n);
	int max1 = max(m,n);
	
	int a_divisor = max1/a - (min1-1)/a;
	int b_divisor = max1/b - (min1-1)/b;
	int lcm_divisor = max1/lcm(a,b) - (min1-1)/lcm(a,b);
	
	int ans = a_divisor + b_divisor - lcm_divisor;
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n,a,b;
		cin >> m >> n >> a >> b;
		cout << result(m,n,a,b) << endl;
	}
	return 0;
}
