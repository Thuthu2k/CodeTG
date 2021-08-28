#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	set<string> st;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		st.insert(s);
	}
	cout << st.size();
	return 0;
}
