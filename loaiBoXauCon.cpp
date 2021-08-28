#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin , s);
	s = s + " ";
	string s1;
	cin >> s1;
	vector<string> res;
	string ans = "";
	string tmp = "";
	for(int i=0 ; i<s.length() ; i++){
		
		if(s[i] == ' '){
			res.push_back(tmp);
			tmp = "";
		} else tmp += s[i];
	}
	
	for(int i=0 ; i<res.size() ; i++){
		if(res[i].compare(s1) == 0){
			continue;
		} else ans = ans + res[i] + " ";

	}
	cout << ans;
	return 0;
}
