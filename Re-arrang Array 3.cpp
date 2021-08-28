#include<bits/stdc++.h>
using namespace std;

int result(int n, int k, int a[]){
	
	int cnt = 0;
	int tmp = 0;
	for(int i=0 ; i<n ; i++) {
		if(a[i] <= k ) cnt++;
	}
	for(int i=0 ; i<cnt ; i++){
		if(a[i] > k) tmp++; 
	}
	int ans = tmp;
	for(int i = 0,j=cnt; j<n; i++,j++){
		if(a[i] > k) tmp--;
		if(a[j] > k) tmp++;
		ans = min(ans,tmp);
	}
	return ans;
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0 ; i< n ;i++) cin >> a[i];
		cout << result(n,k,a) << endl;
	}
	return 0;
}
