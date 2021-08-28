#include<bits/stdc++.h>
using namespace std;


bool solve(string s){
	string tmp = s;
	reverse(s.begin() , s.end());
	return s == tmp;
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(solve(s)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
