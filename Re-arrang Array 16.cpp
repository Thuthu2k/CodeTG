#include<bits/stdc++.h>
using namespace std;

string result(string s){
	
	int idx = -1;
	for(int i=s.length()-2 ; i>=0 ; i--){
		if(s[i] > s[i+1]){
			idx = i;
			break;
		}
	}
	int ans = -1;
	for(int i=s.length()-1 ; i>idx ; i--){
		if(s[i] < s[idx]){
			if(ans == -1){
				ans = i;
			} else if(s[i] >= s[ans]) ans = i;
		}
	}
	if(idx == -1){
		return "-1";
	}
	if(ans != -1){
		swap(s[idx], s[ans]);
		return s;
	}
	return "-1";
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << result(s) << endl;
	}
	return 0;
}
