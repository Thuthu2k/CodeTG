#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m];
	for(int i=0 ; i<n ; i++){
		for(int j=0; j<m ; j++){
			cin >> a[i][j];
		}
	}
	
	int top = 0, bottom = n-1;
	int left = 0, right = m-1;
	while(true){
		if(left > right)
			break;
		for(int i=left ; i<=right ; i++){
			cout << a[top][i] << " ";
		}
		top++;
		if(top > bottom){
			break;
		}
		for(int i=top ; i<=bottom ; i++){
			cout << a[i][right] << " ";
		}
		right--;
		if(left > right)	
			break;
		for(int i=right; i>=left ; i--){
			cout << a[bottom][i] << " ";
		}
		bottom--;
		if(top > bottom) break;
		for(int i=bottom ; i>=top ; i--){
			cout << a[i][left] << " ";
		}
		left++;
	}
	return 0;
}
