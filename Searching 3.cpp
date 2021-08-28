#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n-1];
		bool ok[n+1];
		memset(ok , true, sizeof(ok));
		for(int i=0 ; i<n-1 ; i++){
			cin >> a[i];
			ok[a[i]] = false;
		}
		int ans = -1;
		for(int i=1 ; i<=n ; i++){
			if(ok[i]){
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
