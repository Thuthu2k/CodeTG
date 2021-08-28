#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0 ; i<n ;i++){
			cin >> a[i];
		}
		int idx =0;
		long long ans[n];
		for(int i=0 ; i<n ;i++){
			if(a[i] != 0){
				ans[idx++] = a[i]; 
				
			}
		}
		while(idx < n){
			ans[idx++] = 0;
			
		}
		for(int i=0 ; i<n; i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	
}
