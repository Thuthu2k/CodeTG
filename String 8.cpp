#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll stringtonum(string s){
	ll ans = 0;
	for(int i=0 ; i<s.length() ; i++){
		ans = ans*10 + int(s[i]-'0');
	}
	return ans;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		s = s + "a";
		string tmp="";
		ll sum = 0;
		for(int i=0 ; i<s.length() ; i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				sum += stringtonum(tmp);
				tmp = "";
			}
			else tmp += s[i];
		}
		cout << sum << endl;
	}
	return 0;
}
