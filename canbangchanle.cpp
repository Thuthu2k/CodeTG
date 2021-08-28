#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli mul(int a, int b){
	if(b == 0) return 1;
	if(b == 1) return a;
	
	if(b%2 == 0){
		return mul(a,b/2)*mul(a,b/2);
	}
	else return a*mul(a,b/2)*mul(a,b/2);
}

bool solve(int n){
	int cnt = 0;
	int cnt1 = 0;
	while(n > 0){
		int tmp = n%10;
		if(tmp % 2 == 0) cnt++;
		cnt1++;
		n/=10;
	}
	return (cnt == (cnt1 - cnt));
}

int main(){
	
	int n;
	cin >> n;
	int cnt = 0;
	for(lli i = mul(10,n-1) ; i<=mul(10,n); i++){
		if(cnt == 10){
			cnt = 0;
			cout << endl;
		}
		if(solve(i)){
			cout << i << " ";
			cnt++;
		}
	}
	return 0;
}
