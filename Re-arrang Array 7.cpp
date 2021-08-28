#include<bits/stdc++.h>
using namespace std;

bool sosanh(string x, string y){
	string xy = x.append(y);
	
	string yx = y.append(x);
	
	return (xy > yx); 
}



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n; 
		vector<string> a(n);
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		sort(a.begin() , a.end(),sosanh);
		string ans = "";
		for(int i=0 ; i<n ;i++) ans += a[i];
		
		cout << ans << endl;
		
	}
	return 0;
}
