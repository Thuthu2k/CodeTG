#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m;
		int a[n], b[m];
		long long ans[n+m];
		long long idx = 0;
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
			ans[idx++] = a[i];
		}
		for(int i=0; i<m ;i++) {
			cin >> b[i];
			ans[idx++] = b[i];
		}
		sort(ans, ans+m+n);
		
		for(int i=0 ; i< m+n ; i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
