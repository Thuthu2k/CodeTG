#include<bits/stdc++.h>
using namespace std;


typedef long long int lli;


class PhanSo{
	private:
		lli tu,mau;
	public:
		PhanSo(lli tu, lli mau){
			this->tu = tu;
			this->mau = mau;
		}
		PhanSo(){
			
		}
		
		void rutgon(){
			lli gcd = __gcd(this->tu, this->mau);
			this->tu = this->tu / gcd;
			this->mau = this->mau / gcd;
		}
		
		void quydong(PhanSo& p){
			this->rutgon();
			p.rutgon();
			lli gcd = __gcd(this->mau, p.mau);
			lli lcm = this->mau * p.mau / gcd;
			this->tu = this->tu * (lcm/this->mau);
			this->mau = lcm;
			p.tu = p.tu * (lcm/p.mau);
			p.mau = lcm; 
		}
		
		PhanSo& operator+(PhanSo& p){
			this->quydong(p);
			this->tu = this->tu + p.tu;
			this->rutgon();
			return *this;
		}
		
		friend ostream &operator<<( ostream &output,PhanSo& p){ 
			output<< p.tu << "/" << p.mau;
			return output;
		}
		
		friend istream &operator>>( istream &input, PhanSo& p){
			input >> p.tu >> p.mau;
			return input;
		}
		
};

int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
