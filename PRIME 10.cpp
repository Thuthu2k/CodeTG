#include<bits/stdc++.h>
using namespace std;

int snt(int n){
	if(n<2) return false;
	for(int i=2 ; i*i <= n ;i++){
		if(n%i == 0) return false;
	}
	return true;
}

int tongchuso(int n){
	int ans =0  ;
	while(n>0){
		ans += n%10;
		n/=10;
	}
	return ans;
}

bool check(int n){
	if(snt(n)){
		return false;
	}
	int sum = tongchuso(n);
	int sum1 = 0;
	for(int i=2 ; i*i <= n ; i++){
		while(n%i == 0){
			sum1 += tongchuso(i);
			n/=i;
		}
	}
	if(n>1) sum1 += tongchuso(n);
	if(sum1 == sum) return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(check(n)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}