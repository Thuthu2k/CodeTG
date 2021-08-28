#include<bits/stdc++.h>
using namespace std;
#define MAX 20
int n,a[MAX];
bool ok = true;
void nhap(){
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		a[i] = i;
	}
}

void sinh(){
	int j = n-1;
	while(j > 0 && a[j] > a[j+1]) j--;
	if(j>0){
		int k = n;
		while(a[k] < a[j]) k--;
		swap(a[k],a[j]);
		int r = j+1, s = n;
		while(r<s){
			swap(a[r],a[s]);
			r++;
			s--;
		}
	}
	else ok = false;
	
}

void hienthi(){
	for(int i=1 ; i<=n ; i++){
		cout << a[i];
	}
	cout << " ";
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		nhap();
		ok = true;
		while(ok){
			hienthi();
			sinh();
		}
		cout << endl;
	}
	return 0;
}
