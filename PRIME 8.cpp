#include<bits/stdc++.h>
using namespace std;

int result(int n, int p){
	int ans = 0;
	while(n>0){
		n = n/p;
		ans += n;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p;
		cin >> n >> p;
		cout << result(n,p) << endl;
	}
	return 0;
}