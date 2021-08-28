#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin , s);
		s = s+ " ";
		int cnt = 0;
		string x = "";
		for(int i = 0; i<s.length() ; i++){
			if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n') x += s[i];
			else{
				if(s.length() > 0){
					cnt++;
					x = "";
				}
			}
		} 
		cout << cnt << endl;
	}
	return 0;
}
