#include<bits/stdc++.h>
using namespace std;

void chuyenso0(int n, int a[]){
	int tmp[n];
	for(int i=0 ; i<n ;i++){
		tmp[i] = a[i];
	}
	int idx = 0;
	for(int i=0 ; i<n ; i++){
		if(tmp[i] != 0){
			a[idx++]=tmp[i];
		}
	}
	while(idx < n){
		a[idx++] = 0;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ;i++) cin >> a[i];
		for(int i=0 ; i<n-1 ; i++){
			if(a[i] == a[i+1] && a[i+1] != 0){
				a[i] = a[i]*2;
				a[i+1] = 0;
			}
		}
		chuyenso0(n,a);
		for(int i=0 ; i<n ;i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
