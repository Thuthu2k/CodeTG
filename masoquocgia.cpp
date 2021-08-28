#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int idx = -1;
		for(int i=0 ; i<s.length(); i++){
			if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
				idx = i;
				break;
			}
		}
		for(int i=0; i<idx ; i++) cout << s[i];
		for(int i=idx+3 ; i<s.length() ; i++) cout << s[i];
		cout << endl;
	}
	return 0;
}
