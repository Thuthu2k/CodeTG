#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		s = s + " ";
		int sum = 1;
		string ans = "";
		for(int i=0 ; i<s.length()-1 ; i++){
			if(s[i] != s[i+1]){
				ans = ans + s[i] + char(sum + '0');
				sum =1;
			}
			else sum++;
		}
		cout << ans << endl;
	}
	return 0;
}
