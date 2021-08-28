#include<bits/stdc++.h>
using namespace std;

string s;
int n;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> n;
		cin.ignore();
		getline(cin, s);
		for(int i=0 ; i<s.length() ; i++){
			if(s[i] >= 'A' && s[i] <='Z') s[i] += 32;
		}
		vector<string> v;
		stringstream ss(s);
		string token;
		while(ss >> token){
			v.push_back(token);
		}
		for(int i=0 ; i<v.size() ; i++){
			v[i][0] -= 32;
		}
		string ans = "";
		if(n == 1 && v.size() != 0){
			ans = ans + v[v.size()-1] + " ";
			for(int i=0 ; i<v.size()-1 ; i++){
				ans = ans + v[i] + " ";
			}
		}
		else if(n == 2 && v.size() != 0){
			for(int i=1 ; i<v.size(); i++){
				ans = ans + v[i] + " ";
			}
			ans = ans + v[0] + " ";
		}
		if(ans.length() != 0){
			ans.erase(ans.size()-1,1);
		}
		cout << ans << endl;
	}
	return 0;
}