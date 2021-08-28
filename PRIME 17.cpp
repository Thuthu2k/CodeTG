#include<bits/stdc++.h>
using namespace std;

#define MAX 10000005

bool a[MAX];

void sang(){
	memset(a, true, sizeof(a));
	a[0] = a[1] = false;
	
	for(long long i=2; i*i<=MAX ; i++){
		if(a[i]){
			for(long long j=2*i ; j<=MAX ; j+=i){
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
		long long l, r;
		cin >> l >> r;
		int cnt = 0;
		for(long long i=l ; i*i <= r ; i++){
			if(a[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}