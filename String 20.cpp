#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		s = s + " ";
		vector<string> res;
		string tmp = "";
		for(int i=0 ; i<s.length() ; i++){
			if(s[i] == ' ' && tmp.length() != 0){
				res.push_back(tmp);
				tmp = "";
			}
			else tmp += s[i];
		}
		for(int i=res.size()-1 ; i>=0 ; i--){
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
