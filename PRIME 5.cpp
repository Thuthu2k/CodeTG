#include<bits/stdc++.h>
using namespace std;
#define MAX 100005

bool a[MAX];
void sang(){
	memset(a, true, sizeof(a));
	
	a[0] = a[1] = false;
	for(int i=2 ; i*i <=MAX ;i++){
		if(a[i]){
			for(int j=i*2 ; j<=MAX ; j+= i){
				a[j] = false;
			}
		}
	}
}

int main(){
	int t;
	cin >>t;
	sang();
	while(t--){
		int m, n;
		cin >> m >> n;
		for(int i=m ; i<=n ; i++){
			if(a[i]){
				cout << i << " ";
			}
		}
		cout << endl;
		
	}
	return 0;
}
