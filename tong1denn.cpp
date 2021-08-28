#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
		lli sum= (n*(n+1))/2;
		cout << sum << endl;
	}
	return 0;
}
