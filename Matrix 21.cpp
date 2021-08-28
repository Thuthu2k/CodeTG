#include<bits/stdc++.h>
using namespace std;

int kanede(vector<int> a, int n){
	int ma = INT_MIN;
	int tmp = 0;
	for(int i=0 ; i<n ; i++){
		tmp += a[i];
		if(tmp > ma) ma = tmp;
		if(tmp < 0) tmp = 0;
	}
	return ma;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m , n;
		cin >> n >> m;
		int a[n][m];
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		int ma = INT_MIN;
		for(int i=0 ; i<n ; i++){
			vector<int> v(m);
			for(int j=i ; j<n ; j++){
				for(int k = 0 ; k<m ; k++){
					v[k] += a[j][k];
				}
				ma = max(ma, kanede(v,m));
			}
		}
		cout << ma << endl;
	}
	return 0;
}
