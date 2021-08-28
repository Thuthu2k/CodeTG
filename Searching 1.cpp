#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0 ; i<n ;i++){
			cin >> a[i];
		}
		int idx = -1;
		for(int i=0 ; i<n ; i++){
			if(a[i] == x){
				idx = i+1;
				break;
			}
		}
		cout << idx << endl;
	}
	return 0;
}
