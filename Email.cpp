#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	getline(cin, s);
	s = s + " ";
	vector<string> res;
	string tmp = "";
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
	}
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] == ' '){
			res.push_back(tmp);
			tmp = "";
		}
		else tmp = tmp + char(s[i]);
	}
	string ans = "";
	ans += res[res.size()-1];
	for(int i=0 ; i<res.size()-1 ; i++){
		ans += res[i][0];
	}
	ans += "@ptit.edu.vn";
	cout << ans;
	return 0;
}
