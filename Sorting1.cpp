#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ;i++){
			cin >> a[i];
		}
		int ans[n];
		int idx = 0;
		sort(a,a+n);
		int i=0, j=n-1;
		while(i <= j){
			ans[idx++]= a[j];
			ans[idx++] = a[i];
			if(i == j){
				ans[idx] = a[i];
			}
			i++;
			j--;
		}
		for(int i=0 ;i<n ;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
