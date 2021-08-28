#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	if(s.length() == 1) return false;
	if(s[0] == '0') return false;
	string tmp = s;
	reverse(s.begin() , s.end());
	return s == tmp;
}

bool sosanh(string a, string b){
	int n1 = a.length(), n2 = b.length();
	if(n1 < n2) return true;
	if(n2 < n1) return false;
	for(int i=0 ; i<n1 ; i++){
		if(a[i] < b[i]) return true;
		else if(a[i] > b[i]) return false;
	}
	return false;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	string s;
	getline(cin, s);
	map<string, int> mp;
	vector<string> v;
	stringstream ss(s);
	string token;
	while(ss >> token){
		if(check(token)){
			mp[token]++;
		}
	}
	map<string, int>::iterator it;
	for(it = mp.begin() ; it != mp.end() ; it++){
		v.push_back(it->first);
	}
	sort(v.begin() , v.end(), sosanh);
	for(int i=v.size()-1 ; i>=0 ; i--) {
		if(i == 0){
			cout << v[i] << " " << mp[v[i]]; 
		}
		else cout << v[i] << " " << mp[v[i]] << endl; 
//		cout << v[i] << " ";
	}
	return 0;  
}
