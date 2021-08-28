#include<bits/stdc++.h>
using namespace std;

bool check1(vector<string>& v){
	if(v.size() % 2 != 0) return false;
	int cnt = 0;
	for(int i=0 ; i<v.size() ; i++){
		if(int(v[i][v[i].size()-1] - '0')% 2 == 0 ) cnt++;
	}
	return (v.size() - cnt < cnt);
}

bool check2(vector<string>& v){
	if(v.size() % 2 == 0) return false;
	int cnt = 0;
	for(int i=0 ; i<v.size() ; i++){
		if(int(v[i][v[i].size()-1] - '0')% 2 == 0 ) cnt++;
	}
	return (v.size() - cnt > cnt);
}


int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin , s);
		s = s + " ";
		string tmp = "";
		vector<string> v;
		for(int i=0; i<s.length() ; i++){
			if(s[i] == ' ' && tmp.length() > 0){
				v.push_back(tmp);
				tmp = "";
			} 
			else tmp += s[i];
		}		
		if(check1(v) || check2(v)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
