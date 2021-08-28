#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		int ma= INT_MIN;
		int rightM[n];
		rightM[n-1] = a[n-1];
		for(int i=n-2 ; i>=0 ; i--){
			rightM[i] = max(rightM[i+1],a[i]);
		}
		int i=0 , j=0;
		while(i<n && j <n){
			if(a[i] <= rightM[j]){
				ma = max(ma, abs(i-j));
				j++;
			}
			else i++;
		}
		cout << ma << endl;
	}
	return 0;
}
