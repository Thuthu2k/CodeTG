#include<bits/stdc++.h>
using namespace std;

bool snt (int k){
	if(k < 2) return false;
	for(int i=2 ; i<=sqrt(k) ; i++){
		if(k%i == 0) return false;
	}
	return true;
}

int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int cnt = 0;
		for(int i=1 ; i<x ; i++){
			if(gcd(x,i) == 1){
				cnt++;
			}
		}
		if(snt(cnt)){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
	return 0;
}
