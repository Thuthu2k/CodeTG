#include<bits/stdc++.h>
using namespace std;

#define MAX 1000005
bool a[MAX];

void sang(){
	memset(a, true, sizeof(a));
	a[0] = a[1] = false;
	for(int i=2 ; i*i <= MAX; i++){
		if(a[i]){
			for(int j=2*i ; j<= MAX ; j+=i){
				a[j] = false;
			}
		}  
	}
}

int main(){
	int t;
	cin >> t;
	sang();
	while(t--){
		int n;
		cin >> n;
		bool check = false;
		for(int i=2 ; i<n ; i++){
			if(a[i] && a[n-i]){
				cout << i << " " << n-i;
				check=true;
				break;
			}
		}
		if(!check){
			cout << -1;
		}
		cout << endl;
	}
	return 0;
}
