#include<bits/stdc++.h>
using namespace std;
#define MAX 16

int a[MAX][MAX];	

int solve(int n, int m){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(i != 0 && a[i][j] != 0){
				a[i][j] = a[i-1][j] + 1;
			}
		}
	}
	
	for(int i=0 ; i<n ; i++){
		vector<int> v;
		for(int j=0 ; j<m ; j++){
			v.push_back(a[i][j]);
		}
		sort(v.begin() , v.end());
		for(int j=0 ; j<v.size() ; j++){
			a[i][j] = v[j];
		}
	}
	
	int ans = 0;
	int curr_s = 0;
	for(int i=0 ; i<n ; i++){
		int width = 1;
		for(int j=m-1 ; j>=0 ; j--){
			int curr_s = a[i][j]*width; width++;
			if(curr_s > ans ) ans = curr_s;
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
	
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		
		cout << solve(n,m) << endl;
	}
	return 0;
}
