#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		bool ok = false;
		int ans = -1;
		for(int i=1 ; i<n ;i++){
			for(int j=0 ; j<i ; j++){
				if(a[i] == a[j]) {
					ans = a[j];
					ok = true;
					break;
					
				}
			}
			if(ok) break;
		}
		cout << ans << endl;
	}
	return 0;
}
