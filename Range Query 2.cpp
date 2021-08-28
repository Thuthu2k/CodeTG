#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		int l,r;
		cin >> l >> r;
		int cnt = 0;
		int Max = 0;
		int idx = -1;
		for(int i = l ; i<=r ; i++){
			if(a[i] >= Max){
				Max = a[i];
				idx = i;
			}
		} 
		bool ok1 = true, ok2 = true;
		if(l == r){
			ok1 = true;
			ok2 = true;
		}
		if(idx == l && l != r){
			ok1 = false;
			ok2 = false;
		}
		for(int i=l+1 ; i<idx ; i++){
			if(a[i] < a[i-1]){
				ok1 = false;
				break;
			}
		}
		for(int i=idx+1; i<=r ; i++){
			if(a[i] > a[i-1]){
				ok2 = false;
				break;
			}
		}
		if(ok1 && ok2){
			cout <<"Yes"<< endl;
		}
		else cout << "No" << endl;
	}
	return 0;
}