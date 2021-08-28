#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		vector<int> v;
		vector< vector<int> > res;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				cin >> a[i][j];
				v.push_back(a[i][j]);
			}
			sort(v.begin(),v.end());
			res.push_back(v);
			v.clear();
		}
		map<int,int> b;
		map<int,int>::iterator it;
		for(int i=0 ; i<res.size() ; i++){
			b[res[i][0]]++;
			for(int j=1 ; j<res[0].size() ; j++){
				if(res[i][j] != res[i][j-1]){
					b[res[i][j]]++;
				}
			}
		}
		int cnt = 0;
		for(it = b.begin() ; it!= b.end() ; it++){
			if(it -> second == n) cnt++; 
		}
		cout << cnt << endl ; 
		}
	return 0;
}

