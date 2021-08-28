#include<bits/stdc++.h>
using namespace std;

#define MAX 25

int a[MAX];
int n;
bool ok = true;

void nhap(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		a[i] = 0;
	}
}

void xuat(){
	for(int i=1 ; i<=n ; i++){
		cout << a[i];
	}
	cout << " ";
}

void sinhNhiPhan(){
	int i = n;
	while(i>0 && a[i] != 0){
		a[i] = 0;
		i--;
	}
	if(i > 0){
		a[i] = 1;
	} else ok = false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		ok = true;
		while(ok){
			xuat();
			sinhNhiPhan();
		}
		cout << endl;
	}
	return 0;
}
