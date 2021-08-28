#include<bits/stdc++.h>
using namespace std;


int main(){
	
	string s;
	getline(cin , s);
	s = s+ " ";
	vector<string> res;
	string tmp = "";
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		if(s[i] == ' ' && tmp != ""){
			res.push_back(tmp);
			tmp= "";
		} else tmp += s[i];
	}
	for(int i=0 ; i<res.size(); i++) {
		for(int j=0 ; j<res[i].size(); j++){
			if(j == 0 && (res[i][j] >= 'a' && res[i][j] <= 'z')) res[i][j] -= 32;
			
			if(i == res.size()-1){
				if(res[i][j] >= 'a' && res[i][j] <= 'z') res[i][j] -= 32;
			}
		}
	}
	string ans = "";
	for(int i=0 ; i<res.size()-1; i++) {
		if(res[i] != " " && i < res.size()-2){
			ans = ans + res[i] + " ";
		}
		if(i == res.size()-2) ans = ans + res[i];
	}
	ans = ans + ", " + res[res.size()-1];
	cout << ans; 
	return 0;
}
