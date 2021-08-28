#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		long n,m;
		cin >> n >> m;
		long sum = (n*n+n)/2;
		if(sum < m){
			cout << "No" << endl;
		}
		else {
			if(sum%2 == m%2){
				long x = (sum+m)/2;
				long y = (sum-m)/2;
				if(__gcd(x,y) == 1){
					cout << "Yes"<< endl;
				}
				else cout << "No" << endl;
			}
			else cout << "No" << endl;
		}
		
	}
	return 0;
}