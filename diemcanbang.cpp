#include<bits/stdc++.h>
using namespace std;

int solve(int n, int a[]){
	int ans = -1;
	int sum = 0;
	int tmp = 0;
	for(int i=0 ; i<n ; i++){
		sum += a[i];
	}
	for(int i=0 ; i<n ; i++){
		if(sum - a[i]-tmp == tmp){
			ans = i;
			break;
		}
		tmp += a[i];
	}
	return ans;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ;i++) cin >> a[i];
		int ans = solve(n,a);
		
		if(ans != -1){
			cout << ans+1 << endl;
		}
		else cout << ans << endl;
	}
	return 0;
}