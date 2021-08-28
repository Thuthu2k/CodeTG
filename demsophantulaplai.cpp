#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i=0 ; i<n ; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		int ans = 0;
		map<int,int>::iterator it;
		for(it = mp.begin() ; it != mp.end() ; it++){
			if(it->second > 1){
				ans += it->second;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
