#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MAX 22

lli a[MAX];

void giaithua(){
	
	a[0] = 1;
	a[1] = 1;
	for(int i=2 ; i<=MAX ; i++){
		a[i] = a[i-1]*i;
	}
}
int main(){
	int n;
	cin >> n;
	giaithua();
	lli sum = 0;
	for(int i=1 ; i<=n ; i++){
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
}
