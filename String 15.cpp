#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 0;
		for(int i=0 ; i<s.length() ; i++){
			for(int j=i ; j<s.length() ; j++){
				if(s[i] == s[j]) ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
