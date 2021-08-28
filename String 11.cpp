#include<bits/stdc++.h>
using namespace std;

string result(string s, string t){
	if(s.length() < t.length()) return "-1";
	int hashs[255] = {0};
	int hasht[255] = {0};
	int start = 0;
	int front = -1;
	int cnt = 0;
	int mini = INT_MAX;
	for(int i = 0 ; i<t.length() ; i++) hasht[t[i]]++;
	for(int i=0 ; i<s.length() ; i++){
		hashs[s[i]]++;
		if(hasht[s[i]] != 0 && hasht[s[i]] >= hashs[s[i]]){
			cnt++;
		}
		if(cnt == t.length()){
			while(hasht[s[start]] == 0 || hasht[s[start]] < hashs[s[start]]){
				if(hasht[s[start]] < hashs[s[start]]){
					hashs[s[start]]--;
				}
				start++;
			}
			int len = i - start + 1;
			if(len < mini){
				mini = min(len,mini);
				front = start;
			}
			
		}
		
	}
	if(front == -1){
		return "-1";
	}
	return s.substr(front,mini);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s, t;
		cin >> s >> t;
		cout << result(s,t) << endl;
	}
	return 0;
}