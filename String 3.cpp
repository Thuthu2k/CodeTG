#include<bits/stdc++.h>
using namespace std;

int chuyendoi(string s){
	if(s.compare("00") == 0) return 0;
	else if(s.compare("01") == 0) return 1;
	else if(s.compare("10") == 0) return 2;
	return 3;
}

bool check(string s){
	if(s.length()%2 != 0){
		s = "0" + s;
	}
	
	int n = s.length();
	int ok = 1;
	int sumodd = 0;
	int sumeven = 0;
	for(int i= 0 ; i<n ; i+=2){
		if(ok){
			sumodd += chuyendoi(s.substr(i,2));
		}
		else sumeven +=chuyendoi(s.substr(i,2));
		ok ^= 1;
	}
	return (abs(sumodd - sumeven) % 5 == 0);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)){
			cout << "Yes" << endl;
		} else cout << "No" << endl;
	}
	return 0;
}
