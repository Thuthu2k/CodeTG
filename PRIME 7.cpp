#include<bits/stdc++.h>
using namespace std;
//#define MAX 100005
//
//bool a[MAX];
//void sang(){
//	memset(a, true, sizeof(a));
//	a[0] = a[1] = false;
//	
//	for(int i=2 ; i*i<= MAX ; i++){
//		if(a[i]){
//			for(int j=i*2 ; j<=MAX ; j+= i){
//				a[j] = false;
//			}
//		}
//	}
//	
//}
bool snt (int n){
	if(n < 2) return false;
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i == 0) return false;
	}
	return true;
}

int check(int n){
	int b[8] = {0};
	int cnt = 0;
	int j=0;
	for(int i=1 ; i <= n ;i++){
		if(n%i == 0 && cnt < 9){
			cnt++;
			b[j++] = i;
		}
	}
	int cnt2 = 0;
	int mul = 1;
	for(int i=0 ; i<8 ; i++){
		if(snt(b[i])){
			cnt2++;
			mul *= b[i];
		}
	}
	
	if(cnt == 8 && cnt2 == 3 && mul == n){
		return 1;
	}
	return 0;
	
}

int main(){
	
	int t;
	cin >> t;
//	sang();
	while(t--){
		int n;
		cin >> n;
		cout << check(n) << endl;
	}
	return 0;
}
