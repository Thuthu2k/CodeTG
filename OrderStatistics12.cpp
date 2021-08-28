#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		bool check[MAX];
		memset(check, true, sizeof(check));
		for(int i=0 ; i<n ;i++){
			cin >> a[i];
			if(a[i] > 0){
				check[a[i]] = false;
			}
		} 
		int ans = -1;
		for(int i=1 ; i<=MAX ;i++){
			if(check[i]){
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
