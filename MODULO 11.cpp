#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli result(lli a, lli b , lli c){
	if(b == 0) return 0;
	lli s = result(a,b/2,c);
	if(b%2 != 0){
		return (a%c + 2*(s%c))%c;
	}
	else return (2*(s%c))%c;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		lli a,b,c;
		cin >> a >> b >> c;
		cout << result(a,b,c) << endl;
	}
	return 0;
}
