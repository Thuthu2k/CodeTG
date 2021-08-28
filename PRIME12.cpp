#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long  n;
		int k;
		cin >> n >> k;
		vector<int> res;
		for(long i=2 ; i*i<= n ; i++){
			while(n%i == 0){
				res.push_back(i);
				n/=i;
			}
		}
		if(n > 1) res.push_back(n);
		if(res.size() < k){
			cout << -1;
		} else{
			cout << res[k-1];
		}
		cout << endl;
	}
	return 0;
	
}
