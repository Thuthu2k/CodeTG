#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
string Min(string s){
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] == '6') s[i] = '5';
	}
	return s;
} 

string Max(string s){
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] == '5') s[i] = '6';
	}
	return s;
} 

lli stringtonum(string s){
	lli ans = 0;
	for(int i=0 ; i<s.length() ; i++){
		ans = ans * 10 + int(s[i]-'0');
	}
	return ans;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		lli min1 = 0, max1 = 0;
		min1 = stringtonum(Min(s1)) + stringtonum(Min(s2));
		max1 = stringtonum(Max(s1)) + stringtonum(Max(s2));
		cout << min1 << " " << max1 << endl;
	}
	return 0;
}
