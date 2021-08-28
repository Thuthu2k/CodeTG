#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2 ; i*i <= n ; i++){
			int dem = 0;
			int tmp = n;
			while(n%i == 0){
				dem++;
				n/=i;
			}
			if(tmp%i == 0){
				cout << i << " " << dem << " ";
			}
		}
		if(n > 1) cout << n << " " << 1;
		cout << endl;
	}
	return 0;
}
