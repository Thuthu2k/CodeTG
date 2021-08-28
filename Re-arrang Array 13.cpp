#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m , int a[] , int b[]){
	map<int , int> m1;
	
	for(int i=0 ; i<n ; i++){
		m1[a[i]]++;
		
	}
	
	int idx = 0;
	for(int i=0 ; i<m ; i++){
		if(m1[b[i]] != 0){
			for(int j=1 ; j<=m1[b[i]] ; j++){
				a[idx++] = b[i];
			}
		}
		m1.erase(b[i]);
	}
	
	map<int,int>::iterator it;
	for(it = m1.begin() ; it != m1.end() ; it++){
		if(it->second > 0){
			for(int j=1 ; j<= it->second ; j++){
				a[idx++] = it->first;
			}
		}
	}

	for(int i=0 ; i<n ; i++){
		cout << a[i] << " ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		for(int i=0 ; i<m ; i++) cin >> b[i];
		solve(n,m,a,b);
		cout << endl;
	}
	return 0;
}
