#include<bits/stdc++.h>
using namespace std;

string a[10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
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
		for(int i=0 ; i<s.length(); i++){
			if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
		}
		string tmp = "";
		for(int i=0 ; i<s.length() ; i++){
			char c = s[i];
			bool ok = false;
			for(int j=0 ; j<10 ; j++){
				for(int l=0 ; l<a[j].length() ; l++){
					if(c == a[j][l]) {
						tmp += char(j + '0');
						ok = true;
						break;
					}
				}
				if(ok) break;
			}
		}
		if(solve(tmp)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
