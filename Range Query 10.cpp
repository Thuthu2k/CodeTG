#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ;i++) cin >> a[i];
		int i=0 , j=n-1 , ans =0;
		while(i < j){
			if(a[i] == a[j]){
				i++; j--;
			}
			else if(a[i] < a[j]){
				i++;
				a[i] = a[i] + a[i-1];
				ans++;
			}
			else if(a[i] > a[j]){
				j--;
				a[j] = a[j] + a[j+1];
				ans++;
			}
		}
		cout << ans << endl;
		
	}
	return 0;
}
