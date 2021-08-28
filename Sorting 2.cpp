#include<bits/stdc++.h>
using namespace std;



void result(int n, int a[], int x){
	multimap<int, int> m;
	
	for(int i=0 ; i<n ; i++){
		m.insert(make_pair(abs(x-a[i]),a[i]));
	}
	int i =0;
	multimap<int,int>::iterator it;
	for(it = m.begin() ; it!= m.end() ; it++){
		a[i++] = it->second;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , x;
		cin >> n >> x;
		int a[n];
		for(int i=0 ; i<n ;i++) cin >> a[i];
		result(n,a,x);
		for(int i=0 ; i<n ;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
