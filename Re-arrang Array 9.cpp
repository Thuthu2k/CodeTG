#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<int> v;
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		for(int i=0 ; i<n ;i++){
			if(i == 0){
				a[i] = v[i]*v[i+1];
			}
			else if(i == n-1){
				a[i] = v[i]*v[i-1];
			}
			else a[i] = v[i-1]*v[i+1];
		}
		for(int i=0 ; i<n ; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
