#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

struct PhanSo{
	lli tu,mau;
	
};

void nhap(PhanSo& p){
	cin >> p.tu >> p.mau;
}

void rutgon(PhanSo& p){
	lli gcd = __gcd(p.tu,p.mau);
	p.tu= p.tu/gcd;
	p.mau = p.mau/gcd;
}

void in(PhanSo& p){
	cout << p.tu << "/" << p.mau;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
