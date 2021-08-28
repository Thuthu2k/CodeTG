#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long ans = 0;
		for(int i=0 ; i<s.length() ; i++){
			ans += int(s[i]-'0');
		}
		if(ans == 0) cout << 0 << endl;
		else if(ans % 9 == 0 || ans == 9) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}