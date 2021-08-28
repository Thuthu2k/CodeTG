#include<bits/stdc++.h>
using namespace std;
string s;
int result(){
	vector<pair<char,int>> v;
	int ans = 0;
	int tmp;
//	v.push_back({'@',-1});
	for(int i=0 ; i<s.length() ; i++){
		v.push_back({s[i], i});
		while(v.size() >= 3 && v[v.size()-1].first == '0' && v[v.size()-2].first == '0' && v[v.size()-3].first == '1'){
			v.pop_back();
			v.pop_back();
			v.pop_back();
		}
		tmp = v.back().second;
		ans = max(ans, i-tmp);
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		cout << result()<< endl;
	}
	return 0;
}