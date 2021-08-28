#include<bits/stdc++.h>
using namespace std;
#define MAX 500

int a[MAX][MAX];

int solve(int n, int m){
	int ma[n][m] = {0};
	
	
	for(int i=0 ; i<n ; i++){
		ma[i][0] = a[i][0];
	}
	for(int i=0 ; i<m ; i++){
		ma[0][i] = a[0][i];
	}
	int ans = 0;
	for(int i=1 ; i<n ; i++){
		for(int j=1 ; j<m ; j++){
			if(a[i][j] == 1){
				ma[i][j] = min(ma[i-1][j-1], min(ma[i-1][j], ma[i][j-1])) +1;
				
			}
			ans = max(ans, ma[i][j]);
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i=0 ; i<n;  i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		cout << solve(n,m) << endl;
	}
	return 0;
}
