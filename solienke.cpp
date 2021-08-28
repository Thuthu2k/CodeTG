#include<bits/stdc++.h>
using namespace std;


bool solve(string s){
	for(int i=1 ; i<s.length() ; i++){
		int so1 = int(s[i]-'0');
		int so2 = int(s[i-1] - '0');
		if(abs(so1-so2) != 1) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(solve(s)) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
		
	}
	return 0;
}
