#include<bits/stdc++.h>
using namespace std;

bool sosanh(char x, char y){
	return (x > y);
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string ans = "";
		for(int i=0 ; i<n ; i++){
			char s;
			cin >> s;
			switch(s){
				case '0':
					break;
				case '1':
					break;
				case '2':
					ans += "2";
					break;
				case '3':
					ans += "3";
					break;
				case '4':
					ans += "232";
					break;
				case '5':
					ans += "5";
					break;
				case '6':
					ans += "53";
					break;
				case '7':
					ans += "7";
					break;
				case '8':
					ans += "7222";
					break;
				case '9':
					ans += "7332";
					break;
			}
		}
		sort(ans.begin(), ans.end(),sosanh);
		cout << ans;
		cout << endl;
	}
	return 0;
}
