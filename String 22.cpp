#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s, t;
		getline(cin,s);
		getline(cin,t);
		s = s + " ";
		t = t + " ";
		string tmp = "";
		set<string> st;
		set<string> st1;
		for(int i=0 ; i<s.length() ; i++){
			if(s[i] == ' ' && tmp.length() > 0){
				st.insert(tmp);
				tmp = "";
			}
			else tmp += s[i];
		}
		tmp = "";
		for(int i=0 ; i<t.length() ; i++){
			if(t[i] == ' ' && tmp.length() > 0){
				st1.insert(tmp);
				tmp = "";
			}
			else tmp += t[i];
		}
		set<string>:: iterator it;
		for(it = st.begin() ; it != st.end() ; it++){
			if(st1.find(*it) == st1.end()){
				cout << *it << " ";
			}
		}
		cout << endl;
	}
	return 0;
}