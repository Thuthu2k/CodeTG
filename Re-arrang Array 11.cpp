#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],in[n],de[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		for(int i=0 ; i<n ;i++) in[i] = de[i] = 1;
		for(int i=1 ; i<n ; i++){
			for(int j=0 ; j<i ; j++){
				if(a[i] > a[j]){
					in[i] = max(in[i],in[j]+1);
				}
			}
		}
		for(int i=n-2 ; i>=0 ; i--){
			for(int j=n-1 ; j>i ; j--){
				if(a[i] > a[j]){
					de[i] = max(de[i],de[j]+1);
				}
			}
		}
//		for(int i=0 ; i<n; i ++) cout << in[i] << " ";
//		cout << endl;
//		for(int i=0 ; i<n; i ++) cout << de[i] << " ";
		int ans = in[0] + de[0] - 1;
		for(int i=1 ; i<n ; i++){
			ans = max(ans, in[i]+de[i]-1);
		}
		cout << ans << endl;
	}
	return 0;
}