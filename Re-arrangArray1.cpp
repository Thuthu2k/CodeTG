#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long tmp[n];
		memset(tmp , -1 , sizeof(tmp));
		for(int i=0 ; i<n ; i++){
			long long b;
			cin >> b;
			if(b != -1 && b <= n){
				tmp[b] = b;
			}
		}
		for(int i=0 ; i<n ; i++){
			cout << tmp[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
