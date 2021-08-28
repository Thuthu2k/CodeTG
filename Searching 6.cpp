#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int min = INT_MAX;
		int x, y;
		for(int i=0 ; i<n ;i++) cin >> a[i];
		int sum, min_sum = a[0] + a[1];
		for(int i=0 ; i<n-1 ; i++){
			for(int j=i+1; j<n ; j++){
				sum = a[i] + a[j];
				if(abs(sum) < abs(min_sum)){
					min_sum = sum;
					x = i;
					y = j;
				}
			}
		}
		cout << a[x] + a[y] << endl;
	}
	return 0;
}
