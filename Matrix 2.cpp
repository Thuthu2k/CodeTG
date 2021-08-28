#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m];
	vector<int> v;
	vector< vector<int> > res;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> a[i][j];
			v.push_back(a[i][j]);
		}
		sort(v.begin(),v.end());
		res.push_back(v);
		v.clear();
	}
	for(int i=0 ; i<res.size() ; i++){
		for(int j=0 ; j<res[0].size() ; j++){
			cout << res[i][j] << " ";
		}
		cout  << endl;
	}
	return 0;
}
