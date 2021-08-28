#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		int m = INT_MIN;
		set<int> s;
		set<int>::iterator it;
		for(int i=0 ; i<n ; i++){
			s.insert(a[i]);
			m = max(m,a[i]);
		}
		for(int i=0 ; i<n ; i++){
			it = s.find(a[i]);
			if(a[i] == m){
				cout << "_ ";
			}
			else {
				it++;
				cout << *it << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
