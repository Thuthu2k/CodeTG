#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		int row = 0, col = 0;
		int n1 = n, m1 = m;
		int truoc, hientai;
		while(row < n && col < m){
			if(row+1 == n || col +1 == m)
				break;
			truoc = a[row+1][col];
			for(int i=col; i<m ; i++){
				hientai = a[row][i];
				a[row][i] = truoc;
				truoc = hientai;
			}
			row++;
			for(int i=row ; i<n ; i++){
				hientai = a[i][m-1];
				a[i][m-1] = truoc;
				truoc = hientai;
			}
			m--;
			if(row < n){
				for(int i=m-1 ; i>= col ; i--){
					hientai = a[n-1][i];
					a[n-1][i] = truoc;
					truoc = hientai;
				}
			}
			n--;
			if(col < m){
				for(int i=n-1 ; i>= row ; i--){
					hientai = a[i][col];
					a[i][col] = truoc;
					truoc = hientai;
				}
			}
			col++;
		}
		for(int i=0 ; i<n1; i++){
			for(int j=0 ; j<m1 ; j++){
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
