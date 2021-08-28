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
		
		int l[n] ={0};
		for(int i=0 ; i<n ;i++){
			int lmax = 0;
			for(int j=0 ; j<i ; j++){
				if(a[j] < a[i] && lmax < l[j]){
					lmax = l[j];
				}
			} 
			l[i] = lmax + 1;
		}
		int ans = 0;
		for(int i=0 ; i<n ; i++){
			if(l[i] > ans) ans = l[i];
		}
		cout << ans << endl;
	}
	return 0;
}
