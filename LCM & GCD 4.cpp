#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	int t;
	cin >> t;
	while(t--){
		lli a;
		string b;
		cin >> a >> b;
		lli res = 0;
		for(int i=0 ; i<b.length() ; i++){
			res = (res*10 + int(b[i]-'0'))%a;
		}
		cout << __gcd(res,a) << endl;
	}
	return 0;
}