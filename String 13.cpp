#include<bits/stdc++.h>
using namespace std;

int result(string& s, int k){
	unordered_map<char, int> m;
	int left = 0;
	int sum = 0;
	for(int i=0 ; i<s.length() ; i++){
		m[s[i]]++;
		while(m.size() > k){
			m[s[left]]--;
			if(m[s[left]] == 0) m.erase(s[left]);
			left++;
		}
		sum += i-left+1;
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		cout << result(s,k) - result(s,k-1) << endl;
	}
	return 0;
}