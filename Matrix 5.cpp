#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		int sumRow[n] = {0};
		int sumCol[n] = {0};
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				cin >> a[i][j];
				sumRow[i] += a[i][j];
				sumCol[j] += a[i][j];
			}
		}
		int cnt = 0 ;
		int maxSum = 0;
		for(int i=0 ; i<n ; i++){
			maxSum = max(maxSum, max(sumRow[i],sumCol[i]));
		}
		for(int i=0, j=0 ; i<n,j<n ;){
			int diff = min(maxSum-sumRow[i] , maxSum - sumCol[j]);
			sumRow[i] += diff;
			sumCol[j] += diff;
			cnt += diff;
			if(sumRow[i] == maxSum)	i++;
			if(sumCol[j] == maxSum) j++;
		}
		cout << cnt << endl;
	}
	return 0;
}
