#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005

int f[MAX];
bool sosanh(int a, int b){
	if(f[a] != f[b]) return f[a] > f[b];
	else return a < b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		memset(f,0, sizeof(f));
		for(int i=0 ; i < n ; i++) {
			cin >> a[i];
			f[a[i]]++;
		}
		sort(a, a+n, sosanh);
		for(int i=0 ; i<n ;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
