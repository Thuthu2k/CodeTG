#include<bits/stdc++.h>
using namespace std;


long long pow(long long x, long long y , long long p){
	if(y == 0) return 1%p;
	
	if(y%2 == 0){
		return (pow(x,y/2,p)*pow(x,y/2,p))%p;
	} else return x*((pow(x,y/2,p)*pow(x,y/2,p))%p)%p;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long x,y,p;
		cin >> x >> y >> p;
		cout << pow(x,y,p) << endl;
	}
}
