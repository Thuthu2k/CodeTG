#include<bits/stdc++.h>
using namespace std;

string s;

int solve(int n){
	int ans = 0;
	
	for(int i=0 ; i<s.length() ; i++){
		int so = 0;
		for(int j= i ; j<s.length() ; j++){
			so = so*10 + int(s[j] - '0');
			so = so %n;
			if(so == 0) ans++;
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		cout << solve(8) - solve(24) << endl;
	}
	return 0;
}
