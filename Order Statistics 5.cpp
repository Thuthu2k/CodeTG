#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ;i++) cin >> a[i];
		int ans = 0;
		for(int i=0 ; i<n ;i++){
			
			for(int j=0 ; j<i ; j++){
				
				if(a[i] > a[j]){
					int sub = a[i] - a[j];	
					ans = max(ans,sub);
				}
			}
			
		}
		if(ans == 0){
			cout << -1 << endl;
		}
		 else cout << ans << endl;
	}
	return 0;
}
