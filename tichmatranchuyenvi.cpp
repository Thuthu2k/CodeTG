#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int cnt =1;
	while(t--){
		int n, m;
		cin >> n >> m;
		int b_row = m, b_col = n;
		int a[n][m] , b[b_row][b_col];
		for(int i=0 ; i<n; i++){
			for(int j=0  ; j<m ;j++){
				cin >> a[i][j];
				b[j][i] = a[i][j];
			}
		}
		
		int c[n][b_col];
		for(int i=0 ; i<n ; i++){
			for(int j = 0 ; j<b_col ; j++){
				c[i][j] = 0;
				for(int k=0 ; k<m ; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		cout << "Test " << cnt++ << ":" << endl;
		for(int i=0 ; i<n ;i++){
			for(int j=0 ; j<b_col ; j++){
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
