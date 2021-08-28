#include<bits/stdc++.h>

using namespace std;

int stringtonum(string s){
	
	int ans = 0;
	for(int i=0 ; i<s.length() ; i++){
		ans = ans*10 + int(s[i]-'0');
	}
	return ans;
}



struct Nguoi{
	string name;
	vector<int> v;
};

bool sosanh(Nguoi a, Nguoi b){
	if(a.v[2] != b.v[2]){
		return a.v[2] < b.v[2];
	}
	
	if(a.v[1] != b.v[1]){
		return a.v[1] < b.v[1];
	}
	return a.v[0] < b.v[0];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	vector<Nguoi> res;
	while(t--){
		Nguoi a;
		cin >> a.name;
		string s;
		cin >> s;
		string tmp = "";
		s = s + "/";
		for(int i=0 ; i<s.length() ; i++){
			if(s[i] == '/'){
				a.v.push_back(stringtonum(tmp));
				tmp = "";
			}
			else tmp += s[i];
		}
		res.push_back(a);
	}
	sort(res.begin(),res.end(), sosanh);
//	for(int i=0 ; i<res.size() ; i++){
//		cout << res[i].name << " ";
//		for(int j=0 ; j<res[i].v.size(); j++){
//			cout << res[i].v[j] << " ";
//		}
//		cout << endl;
//	}
	cout << res[res.size()-1].name << endl;
	cout << res[0].name;
	return 0;
}
