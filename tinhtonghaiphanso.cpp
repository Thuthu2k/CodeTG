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

void quydong(PhanSo& a, PhanSo& b){
	rutgon(a);
	rutgon(b);
	lli gcd = __gcd(a.mau, b.mau);
	lli lcm = a.mau*b.mau/gcd;
	
	a.tu = a.tu * (lcm/a.mau);
	b.tu = b.tu * (lcm/b.mau);
	a.mau = lcm;
	b.mau = lcm;
}

PhanSo tong(PhanSo& a, PhanSo& b){
	quydong(a,b);
	PhanSo sum;
	sum.tu = a.tu+ b.tu;
	sum.mau = a.mau;
	rutgon(sum);
	return sum;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
