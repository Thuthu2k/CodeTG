#include<bits/stdc++.h>
using namespace std;

vector<string> v;

struct ThiSinh{
	string ten, ngaySinh;
	float diem1, diem2, diem3;
};

void nhap(ThiSinh& a){
	int t=5;
	while(t--){
		string s;
		getline(cin , s);
		v.push_back(s);
	}
}


void in(ThiSinh& a){
	
	a.ten = v[0]; a.ngaySinh = v[1]; 
	a.diem1 = atof(v[2].c_str());
	a.diem2 = atof(v[3].c_str());
	a.diem3 = atof(v[4].c_str());
	
	float ans = a.diem1 + a.diem2 + a.diem3;
	
	cout << a.ten << " " << a.ngaySinh << " ";
	printf("%.1f", ans);
	
}

int main(){
	
	struct ThiSinh A;
	nhap(A);
	in(A);
	
	return 0;
}
