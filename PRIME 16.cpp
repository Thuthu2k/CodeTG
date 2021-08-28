#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

#define MAX 10000005

bool a[MAX];

void sang(){
	memset(a, true, sizeof(a));
	
	a[0] = a[1] = false;
	for(ull i=2 ; i*i <= MAX ; i++){
		if(a[i]){
			for(ull j=i*2 ; j<=MAX ; j+=i){
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
		ull n;
		cin >> n;
		ull cnt = 0;
		for(ull i=0 ; i*i<=n ; i++){
			if(a[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
