#include<bits/stdc++.h>
using namespace std;

long n;
void result(){
	int tmp = 0;
	while(n > 0){
		tmp += n%10;
		n/=10;
	}
	n = tmp;
}

int main(){
	int t;
	cin >>t; 
	while(t--){
		cin >> n;
		while(n > 9){
			result();
		}
		cout << n << endl;
	}
	return 0;
}
