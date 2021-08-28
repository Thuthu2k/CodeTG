#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n; i++) cin >> a[i];
		int l[n+1];
		int sum[n+1];
		int ans = 0;
		for(int i=0 ; i<n ;i++){
			sum[i] = a[i];
			for(int j=0 ; j<i ; j++){
				if(a[i] > a[j] && sum[i] < sum[j]+a[i]){
					sum[i] = sum[j]+a[i];
				}
			}
			ans = max(sum[i],ans);	
		}
//		for(int i=0 ; i<n ; i++){
//			cout << l[i] << " ";
//		}
//		cout << endl;
//		for(int i=0 ; i<n; i++){
//			cout << sum[i] << " ";
//		}
		cout << ans << endl;
		cout << endl;
	}
	return 0;
}