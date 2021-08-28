#include<bits/stdc++.h>
using namespace std;

bool check1(string s){
	for(int i=1 ; i<s.length() ; i++){
		if(s[i] <= s[i-1]) return false;
	}
	return true;
}

bool check2(string s){
	int cnt = 0;
	for(int i=1 ; i<s.length() ; i++){
		if(s[i] == s[i-1]) cnt++;
	}
	return cnt == s.length();
}

bool check3(string s ){
	return ((s[0] == s[1] && s[1] == s[2]) && (s[3]==s[4]));
}

bool check4(string s){
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] != '8' && s[i] != '6') return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	
	while(t--){
		string s;
		cin >> s;
		string tmp="";
		vector<char> v;
		for(int i=0 ; i<s.length() ; i++){
			if(i>4 && (s[i] >= '0' && s[i] <= '9')){
				tmp = tmp + s[i];
			}
		}
		if(check1(tmp) || check2(tmp) || check3(tmp) || check4(tmp)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
	return 0;
}
