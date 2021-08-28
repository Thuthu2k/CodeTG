#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int n,k;
bool ok = true;
int a[MAX];

void nhap(){
    cin >> n >> k;
    for(int i=1 ; i<= k ; i++){
        a[i] = i;
    }
}

void hienthi(){
    for(int i=1 ; i<=k ; i++){
        cout << a[i];
    }
    cout << " ";
}

void sinh(){
    int i = k;
    while(i>0 && a[i] == n-k+i) i--;
    if(i > 0){
        a[i] = a[i] +1;
        for(int j = i+1 ; j<=k ; j++){
            a[j] = a[i] + j -i;
        }
    }
    else ok = false;
}

int main(){

    int t;
    cin >>t;
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



