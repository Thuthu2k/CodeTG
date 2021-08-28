#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int a[n][m];
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		vector<int> v;
		int top = 0, right = m-1;
		int bottom = n-1, left = 0;
		while(true){
			if(left > right)
				break;
			for(int i=left ; i<=right; i++){
				v.push_back(a[top][i]);
			}
			top++;
			if(top > bottom)
				break;
			for(int i=top; i<=bottom ; i++){
				v.push_back(a[i][right]);
			}
			right--;
			if(left > right)
				break;
			for(int i=right; i>= left; i--){
				v.push_back(a[bottom][i]);
			}
			bottom--;
			if(top > bottom)
				break;
			for(int i=bottom ; i>=top ; i--){
				
				v.push_back(a[i][left]);
			}
			left++;
		}
//		for(int i =0; i<v.size() ; i++){
//			cout << v[i] << " ";
//		}
		cout << v[k-1];
		cout << endl;
	}
	return 0;
}
