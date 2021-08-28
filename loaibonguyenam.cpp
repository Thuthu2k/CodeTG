#include<bits/stdc++.h>
using namespace std;


bool check(char c){
	return (c != 'a' && c != 'e' && c !='i' && c!= 'o' && c!='u' && c != 'y');
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	string ans = "";
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		if(check(s[i])){
			ans = ans + "." + s[i];
		}
	}
	cout << ans;
	return 0;
}