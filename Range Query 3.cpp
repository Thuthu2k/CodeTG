#include<bits/stdc++.h>
using namespace std;

bool snt(int n){
	if(n < 2) return false;
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i == 0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		int ans = 0;
		for(int i=l ; i<=r;  i++){
			if(snt(i)){
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
