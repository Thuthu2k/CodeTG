#include<bits/stdc++.h>
using namespace std;

int result(int a[], int b[], int n){
	int ans = 0;
	
	for(int i=0 ; i<n ;i++){
		int s1=0, s2= 0;
		for(int j=i ; j<n ; j++){
			s1 += a[j];
			s2 += b[j];
			if(s1 == s2){
				if(ans < j-i+1){
					ans = j-i+1;
				}
			}
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i=0 ; i<n ;i++){
			cin >> a[i];
		}
		for(int i=0 ; i<n; i++){
			cin >> b[i];
		}
		cout << result(a,b,n) << endl;
	}
	return 0;
}
