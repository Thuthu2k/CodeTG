#include<bits/stdc++.h>
using namespace std;


bool thuannghich(string s){
	string tmp = s;
	reverse(s.begin() , s.end());
	return s == tmp;
}

bool chan(string s){
	for(int i=0 ; i<s.length() ; i++){
		if(int(s[i]-'0') % 2 != 0) return false;
	}
	return true;
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(thuannghich(s) && chan(s)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
