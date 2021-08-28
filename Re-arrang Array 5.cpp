#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i=0 ; i<n ; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		int i=0 , j=n-1;
		int tmp = 0;
		while(i <= j){
			a[tmp++] = b[j--];
			a[tmp++] = b[i++];
			if(i == j){
				a[tmp] = b[i];
			}
		}
		for(int i=0 ; i<n ; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
