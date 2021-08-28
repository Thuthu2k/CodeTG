#include<bits/stdc++.h>
using namespace std;


bool solve(string s){
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] != '0' && s[i] != '6' && s[i] != '8') return false;
	}
	return true;
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(solve(s)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
