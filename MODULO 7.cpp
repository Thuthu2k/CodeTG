#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		sort(a,a+n);
		int k = a[n-1] - a[0];
		int cnt = 0;
		vector<int> v;
		for(int i=1 ; i*i <=k ; i++){
			if(k%i == 0){
				v.push_back(i);
				if(k/i != i){
					v.push_back(k/i);
				}
			}
			
		}
		int j;
		for(int i=0 ; i<v.size() ; i++){
			int tmp = a[0]%v[i];
			j=1;
			for(int l=1 ; l<n ; l++){
				if(a[l]%v[i] != tmp) break;
				else j++;
			}
			if(j == n){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}