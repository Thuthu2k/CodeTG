#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a[256] = {0};
		int Max = 0;
		for(int i=0 ; i<s.length() ; i++){
			a[s[i]]++;
			Max = max(a[s[i]],Max);
		}
		if(s.length() - Max +1 >= Max) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
