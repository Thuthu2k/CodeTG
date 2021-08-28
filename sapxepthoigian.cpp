#include<bits/stdc++.h>
using namespace std;

struct Time{
	int gio,phut,giay;
};

bool sosanh(Time a, Time b){
	if(a.gio != b.gio){
		return a.gio < b.gio;
	}
	if(a.phut != b.phut){
		return a.phut < b.phut;
	}
	return a.giay < b.giay;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	
	int t;
	cin >> t;
	vector<Time> v;
	while(t--){
		Time a;
		cin >> a.gio >> a.phut >> a.giay;
		v.push_back(a);
	}
	sort(v.begin() , v.end() , sosanh);
	for(int i=0 ; i<v.size()-1 ; i++){
		cout << v[i].gio << " " << v[i].phut << " " << v[i].giay << endl;
	}
	cout << v[v.size()-1].gio << " " <<  v[v.size()-1].phut << " " << v[v.size()-1].giay;
	return 0;
}
