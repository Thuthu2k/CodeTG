#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005

bool a[MAX];

void sang(){
	memset(a, true, sizeof(a));
	a[0] = a[1] = false;
	
	for(int i = 2 ; i<MAX ; i++){
		if(a[i]){
			for(int j=i*2 ; j<MAX ; j+=i){
				a[j] = false;
			}
		}
	}
}

int main(){
	
	int l,r;
	
	cin >> l >> r;
	
	int min, max;
	if(l > r){
		min = r;
		max = l;
	} else {
		min = l;
		max = r;
	}
	sang();
	for(int i=min ; i<=max ; i++){
		if(a[i]){
			cout << i << " ";
		}
	}
	return 0;
}
