#include<bits/stdc++.h>
using namespace std;

int result(long n){
	if(n == 1) return 1;
	if(n % 2 == 0) return 2;
	
	for(int i=3 ; i*i <=n ; i++){
		if(n%i == 0){
			return i;
		}
	}
	return n;
}

int main(){
	
	int t;
	cin >> t;

	while(t--){
		long n;
		cin >> n;
		for(long i=1 ; i<=n ; i++){
			cout << result(i) << " ";
		}
		cout << endl;
	}
	return 0;
}
