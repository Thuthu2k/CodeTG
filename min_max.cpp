#include<bits/stdc++.h>
using namespace std;

void min(int m , int s){
	if(m == 1 && s == 0){
		cout << 0 << " ";
		return;
	}
	if(s > 9*m || s == 0){
		cout << -1 << " ";
		return;
	}
	int res[m];
	s-=1;
	int i;
	for(i=m-1 ; i>0 ; i--){
		if(s > 9){
			res[i] = 9;
			s -= 9;
		}
		else{
			res[i] = s;
			s = 0;
		}
	}
	res[0] = s+1;
	for(int i=0 ; i<m ; i++){
		cout << res[i];
	}
	cout << " ";
	return;
}

void max(int m, int s){
	if(m == 1 && s == 0){
		cout << 0;
		return;
	}
	if(s > 9*m || s == 0){
		cout << -1;
		return;
	}
	int res[m];
	for(int i=0 ; i<m ; i++){
		if(s > 9){
			res[i] = 9;
			s-=9;
		} else if(s <= 9){
			res[i] = s;
			s = 0;
		}
	}
	for(int i=0 ; i<m ; i++){
		cout << res[i];
	}
}

int main(){
	

	int m ,s;
	cin >> m >> s;
	min(m,s);
	max(m,s);
	
	return 0;
}
