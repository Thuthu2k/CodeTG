#include<bits/stdc++.h>
using namespace std;

long long amodm(string a, long long m){
	long long res = 0;
	
	for(int i=0 ; i<a.length() ; i++){
		res = (res*10 + int(a[i]-'0'))%m;
		
	}
	return res;
}



long long result (string a, long long m, long long b){
	long long tmp = amodm(a,m);
	
	long long res = 1;
	
	while(b>0){
		
		if(b%2 != 0){
			res = (res*tmp)%m;
		}
		b = b/2;
		tmp = (tmp*tmp)%m;
	}
	return res;
}

int main(){
	
	int t;
	cin >>t;
	while(t--){
		string a;
		long long b, m;
		cin >> a >> b >> m;
		cout << result(a,m,b) << endl;
	}
	return 0;
}
