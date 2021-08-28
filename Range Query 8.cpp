#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		int sum[n] = {0};
		sum[0] = a[0];
		for(int i=1 ; i<n ; i++){
			sum[i] = sum[i-1] + a[i];
		}
		int max = sum[k-1];
		int idx = k-1;
		for(int i=k ; i<n ; i++){
			int tmp = sum[i] - sum[i-k];
			if(tmp > max){
				max =  tmp;
				idx = i;
			}
		}
		for(int i=idx-k+1 ; i<=idx ; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
