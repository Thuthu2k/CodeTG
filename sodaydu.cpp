#include<bits/stdc++.h>
using namespace std;


void solve(string s){
	if(s[0] == '0'){
		cout <<  "INVALID";
		return;
	}
	int a[10] = {0};
	for(int i=0 ; i<s.length() ; i++){
		if(s[i] >= 'a' && s[i] <='z'){
			cout << "INVALID";
			return;
		}	
		else if(s[i] >= '0' && s[i] <= '9'){
			a[int(s[i]-'0')]++;
		}
	}
	for(int i=0 ; i<10 ; i++){
		if(a[i] == 0){
			cout << "NO";
			return;
		}
	}
	cout << "YES";
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		solve(s);
		cout << endl;
	}
	return 0;
	
}
