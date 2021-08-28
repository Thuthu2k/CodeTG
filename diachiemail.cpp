#include<bits/stdc++.h>
using namespace std;

set<string> st;

string numtostring(int n){
	ostringstream convert;
	convert << n;
	string ans = convert.str();
	return ans;
}

string tachso(string s){
	string ans = "";
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] >= '0' && s[i] <= '9') return ans;
		else ans += s[i];
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> v;
		while(ss >> token){
			transform(token.begin(), token.end(), token.begin(), ::tolower);
			v.push_back(token);
		}
		string tmp = "";
		tmp += v[v.size()-1];
		for(int i=0 ; i<v.size()-1 ; i++){
			tmp += v[i][0];
		}
		int cnt = 2;
		if(st.empty() || st.find(tmp) == st.end()){
			st.insert(tmp);
			tmp = tmp + "@ptit.edu.vn";
			cout << tmp << endl;
			continue;
		}
		while(st.find(tmp) != st.end()){
			tmp = tmp + numtostring(cnt);
			if(st.find(tmp) == st.end()){
				cnt = 2;
				st.insert(tmp);
				break;
			}
			tmp = tachso(tmp);
			cnt++;
		}
		tmp = tmp + "@ptit.edu.vn";
		cout << tmp << endl;	
	}
	
	return 0;
}
