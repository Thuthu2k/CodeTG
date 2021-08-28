#include<bits/stdc++.h>
using namespace std;

bool solve(string s, int k){
	int a[28] = {0};
	for(int i=0 ; i<s.length(); i++){
		a[s[i]-'a']++;
		
	}
	int cnt = 0;
	for(int i=0 ; i<28 ; i++){
		if(a[i] >= 1) cnt++;
	}
	return (26-cnt <= k);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		if(solve(s,k)){
			cout << 1 << endl;
		} else cout << 0 << endl;
		
	}
	return 0;
}
