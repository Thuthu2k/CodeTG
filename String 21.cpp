#include<bits/stdc++.h>
using namespace std;

string numtostring(int n){
	string ans = "";
	while(n > 0){
		ans = char(n%10 + '0') + ans;
		n/=10;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 0;
		string res = "";
		for(int i=0 ; i<s.length() ; i++){
			if(s[i] >= '0' && s[i] <= '9'){
				ans += int(s[i]-'0');
			}
			else res += s[i];
		}
		sort(res.begin(), res.end());
		res += numtostring(ans);
		cout << res << endl;
	}
	return 0;
}