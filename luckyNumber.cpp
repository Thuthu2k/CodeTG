#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		long long int n;
		cin >> n;
		int check1 = n%10;
		n/=10;
		int check2 = n%10;
		if(check1 == 6 && check2 == 8){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
	return 0;
}
