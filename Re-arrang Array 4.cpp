#include<bits/stdc++.h>
using namespace std;

void result(int n, int a[]){
	
	vector<int> res;
	for(int i=0 ; i<n ; i++){
		res.push_back(a[i]);
		
	}
	sort(res.begin(), res.end());
	int r = 0, l = res.size()-1;
	vector<int> chan;
	vector<int> le;
	for(int i= 0; i<n ; i++){
		if((i+1)%2 == 0){
			a[i] = res[l--];
			chan.push_back(a[i]);
		}
		else {
			a[i] = res[r++];
			le.push_back(a[i]);
		}
	}
	l=0,r=0;
	sort(chan.begin(), chan.end());
	sort(le.begin(), le.end());
	for(int i= 0; i<n ; i++){
		if((i+1)%2 == 0){
			a[i] = chan[l++];
			
		}
		else {
			a[i] = le[r++];
			
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		
		result(n,a);
		for(int i=0 ; i<n ; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
