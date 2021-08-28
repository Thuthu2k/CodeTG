#include<bits/stdc++.h>
using namespace std;

vector<string> v;
const string ma = "B20DCCN001";

class SinhVien{
	private:
		string maSV, ten, lop, ngaySinh;
		float diemTB;
	public:
		SinhVien(){
			maSV = "";
			ten = "";
			lop = "";
			ngaySinh = "";
			diemTB = 0.0;
		}
		~SinhVien(){
			maSV = "";
			ten = "";
			lop = "";
			ngaySinh = "";
			diemTB = 0.0;
		}
		friend void in(SinhVien a);
};

string solve(string s){
	vector<string> tmp;
	string ans = "";
	stringstream ss(s);
	string token;
	while(getline(ss, token, '/')){
		tmp.push_back(token);
	}
	for(int i=0 ; i<tmp.size()-1 ; i++){
		if(tmp[i].length() == 1){
			ans = ans + "0" + tmp[i] + "/";
		}
		else ans = ans + tmp[i] + "/";
	}
	ans = ans + tmp[tmp.size()-1];
	return ans;
}

void nhap(SinhVien a){
	int t=4;
	while(t--){
		string s;
		getline(cin ,s);
		v.push_back(s);
	}
}

void in(SinhVien a){
	a.maSV = ma;
	a.ten = v[0];
	a.lop = v[1];
	a.ngaySinh = solve(v[2]);
	a.diemTB = atof(v[3].c_str());
	
	cout << a.maSV << " " << a.ten << " " << a.lop << " " << a.ngaySinh << " ";
	printf("%.2f", a.diemTB);
	
}

int main(){
	SinhVien a();
	nhap(a);
	in(a);
	return 0;
}
