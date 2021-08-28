#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin , s);
	s = s+ " ";
	string tmp = "";
	vector<string> v;
	set<int> st;
	st.insert(0);
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] >= 'A' && s[i] <='Z') s[i] += 32;
		if(s[i] == ' ' && tmp.length() > 0){
			v.push_back(tmp);
			tmp = "";
		}
		else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) tmp+= s[i];
		else if(s[i] == ',' || s[i] == ':') tmp += s[i];
		else if((s[i] == '.' || s[i] == '?' || s[i] == '!')){
			if(tmp.length() > 0){
				v.push_back(tmp);
				tmp = "";
			}
			st.insert(v.size());
		}
	}
//	for(int i=0 ; i<v.size() ; i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	set<int>::iterator it;
//	for(it = st.begin(); it != st.end(); it++){
//		cout << *it << " ";
//	}
//	cout << st.size();
	string ans = "";
	for(int i=0 ; i<v.size() ; i++){
		if(st.find(i) != st.end()){
			if(i != 0){
				cout << endl;
			}
			if(v[i][0] >= 'a' && v[i][0] <= 'z') v[i][0] -= 32;
			ans += v[i];
		}
		else{
			if(st.find(i+1) != st.end()){
				ans += v[i];
			}
			else ans = ans + v[i] + " "; 
		}
	}
	return 0; 
}
