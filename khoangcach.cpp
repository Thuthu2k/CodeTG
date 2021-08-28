#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		double a,b,c,d;
		cin >> a >> b >> c >> d;
		double ans = 0;
		
		ans = sqrt(pow(c-a,2) + pow(d-b,2));
		printf("%.4f\n", ans);
	}
	return 0;
}
