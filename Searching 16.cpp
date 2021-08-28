#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n1,n2,n3;
		cin >> n1 >> n2 >> n3;
		lli a[n1] , b[n2] ,c[n3];
		for(int i=0 ; i<n1 ; i++) cin >> a[i];
		for(int i=0 ; i<n2 ; i++) cin >> b[i];
		for(int i=0 ; i<n3 ; i++) cin >> c[i];
		int i=0 , j=0 , l=0;
		vector<lli> v;
		while(i<n1 && j<n2 && l<n3){
			if(a[i] == b[j] && a[i] == c[l]){
				v.push_back(a[i]);
				i++; j++; l++;
			}
			else if(a[i] > b[j]) j++;
			else if(a[i] > c[l]) l++;
			else i++;
		}
		if(v.size() == 0){
			cout << "-1";
		}
		else{
			for(int i=0 ; i<v.size() ; i++){
				cout << v[i] << " ";
			}
		}	
		cout << endl;
	}
	return 0;
}
