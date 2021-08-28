#include<bits/stdc++.h>
using namespace std;

long long result (string n, long long m){
	long long ans = 0;
	
	for(int i=0 ; i<n.length() ; i++){
		ans = (ans*10 + int(n[i]-'0'))%m;
	}
	return ans;
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		string n ;
		long long m ; 
		cin >> n >> m;
		cout << result(n,m) << endl;
	}
	
	return 0;
}
