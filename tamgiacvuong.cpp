#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool solve(int n, lli a[]){
	for(int i=0 ; i<n ; i++){
		a[i] = a[i]*a[i];
	}
	sort(a,a+n);
	for(int i=2 ; i<n ; i++){
		int l=0, r=i-1;
		while(l < r){
			if(a[l]+a[r] == a[i]) return true;
			else if(a[l] + a[r] < a[i]) l++;
			else if(a[l] + a[r] > a[i]) r--;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		lli a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		if(solve(n,a)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
