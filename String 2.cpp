#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	
	int sum1,sum2;
	sum1 = sum2 = 0;
	for(int i=0 ; i<s.length() ; i++){
		if(i%2 == 0){
			sum1 += int(s[i]-'0');
		} else sum2 += int(s[i] - '0');
	}
	return (abs(sum1-sum2)%11 == 0);
}

int main(){
	int t;
	cin >>t; 
	while(t--){
		string s; 
		cin >> s;
		if(check(s)){
			cout << 1 << endl;
		} else cout << 0 << endl;
	}
	return 0;
}
