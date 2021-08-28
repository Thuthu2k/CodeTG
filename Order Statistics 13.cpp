#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n] , b[m];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		for(int i=0 ; i<m ; i++) cin >> b[i];
		
		int i=0 , j=0;
		int sum1 = 0, sum2 = 0, ans =0;
		int cnt = 0;
		int tmp = 0;
		int ok;
		while(i<n && j<m){
			if(a[i] < b[j]){
				sum1 += a[i++];
			}
			else if(a[i] > b[j]){
				sum2 += b[j++];
			}
			else {
				if(cnt == 0){
					
					if(max(sum1,sum2) == sum1){
						ans += sum1;
						tmp += sum2;
						ok=1;
					}
					else {
						ans += sum2;
						tmp += sum1;
						ok = 0;
					}
				}
				else{
					ans = max(sum1,sum2);
					tmp = max(sum1,sum2);
				}
				sum1 = 0;
				sum2 = 0;
				while(i<n && j<m && a[i] == b[j]){
					ans += a[i];
					tmp += a[i];
					i++;
					j++;
				}
				cnt++;
			}
		}
		while(i<n) sum1 += a[i++];
		while(j<m) sum2 += b[j++];
		if(ok == 0){
			ans += sum1;
			tmp += sum2;
		} else if(ok == 1){
			ans += sum2;
			tmp += sum1;
		}
		ans = max(ans, tmp);
		cout << ans << endl;
	}
	return 0;
}
