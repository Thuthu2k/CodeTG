#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		lli ans = 0;
//		sort(a,a+n);
		for(int i=0 ; i<n ; i++){
			lli tmp = 1;
			for(int j=i ; j>=0 ; j--){
				tmp = tmp * a[j];
				if(tmp > ans){
					ans = tmp;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
