#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

class PhanSo{
	private:
		lli tu, mau;
	public:
		PhanSo(lli tu, lli mau){
			this->tu = tu;
			this->mau = mau;
		}
		friend ostream &operator<<( ostream &output, const PhanSo &p ){
			output<< p.tu << "/" << p.mau;
			return output;
		}
		friend istream &operator>>( istream  &input, PhanSo &p ){
			input >> p.tu >> p.mau;
			return input;
		}
		void rutgon(){
			lli gcd = __gcd(this->tu, this->mau);
			this->tu = this->tu / gcd;
			this->mau = this->mau / gcd;
		}
};

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
