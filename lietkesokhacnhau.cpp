#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int a[n];
	set<int> s;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	set<int>::iterator it;
	
	for(it = s.begin() ; it != s.end() ; it++){
		cout << *it << " ";
	}
	return 0;
}