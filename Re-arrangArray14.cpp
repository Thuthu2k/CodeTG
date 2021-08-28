#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t; 
	cin >> t;
	while(t--){
		int k , n;
		cin >> k >> n;
		int a[k][n];
		vector<int> ans;
		for(int i=0 ; i<k ; i++){
			for(int j=0 ; j<n ; j++){
				cin >> a[i][j];
				ans.push_back(a[i][j]);
			}
		}
		sort(ans.begin(), ans.end());
		
		for(int i=0 ; i<ans.size() ; i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
