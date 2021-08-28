#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int a[26] = {0};
	
	for(int i=0 ; i<s.length() ; i++){
		a[s[i] - 'A']++;
	}
	for(int i=0 ; i<s.length() ; i++){
		if(a[s[i]- 'A'] == 1){
			cout << s[i];
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		solve( s);
	}
	return 0;
}
