#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		bool ok = false;
		for(int i=0 ; i<n ;i++){
			cin >> a[i];
			if(a[i] == x){
				ok = true;
			}
		}
		if(ok){
			cout << 1 << endl;
		} else cout << -1 << endl;
	}
	return 0;
}
