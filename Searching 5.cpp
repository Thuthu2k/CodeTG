#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >>t ;
	while(t--){
		int n;
		cin >> n;
		int min1 = INT_MAX, min2 = INT_MAX;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		for(int i=0 ; i<n ;i++){
			if(a[i] < min1){
				min2 = min1;
				min1 = a[i];
				
			}
			else if (a[i] < min2 && a[i] > min1){
				min2 = a[i];
			}
		}
		if(min2 == INT_MAX){
			min2 = -1;
			cout << min2 << endl;
		} else{
			cout << min1 << " " << min2 << endl;
		}
		 
	}
	return 0;
}
