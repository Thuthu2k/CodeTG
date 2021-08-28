#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n];
	vector<int> v;
	for(int i=0 ; i<n ;i++){
		for(int j=0 ; j<n; j++){
			cin >> a[i][j];
			v.push_back(a[i][j]);
		}
	}
	sort(v.begin() , v.end());
	int idx = 0;
	int d=0, hang = n-1, cot = n-1;
	while(d <= n/2){
		for(int i=d ; i<=cot ; i++) a[d][i] = v[idx++];
		for(int i=d+1 ; i<=hang; i++) a[i][cot] = v[idx++];
		for(int i=cot-1 ; i>=d ; i--) a[hang][i] = v[idx++];
		for(int i=hang-1 ; i>d; i--) a[i][d] = v[idx++];
		hang--; cot--; d++;
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
