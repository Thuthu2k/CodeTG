#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		set<int> s;
		for(int i=0 ; i<n ; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		bool check = false;
		for(int i=0 ; i<n; i++){
			if(s.find(abs(a[i]-x)) != s.end()){
				check = true;
				break;
			}
		}
		if(check){
			cout << 1 << endl;
		}
		else cout << -1 << endl;
	}
	return 0;
}
