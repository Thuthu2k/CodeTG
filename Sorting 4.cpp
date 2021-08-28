#include<bits/stdc++.h>
using namespace std;
void MangGiao(int n , int m , int a[] , int b[]){
    set<int> s;
    for(int i=0 ; i<m ; i++){
        s.insert(b[i]);
    }
    sort(a, a+n);
    for(int i=0 ; i<n ; i++){
        if(s.find(a[i]) != s.end()){
            cout << a[i] << " "; 
        }
    }
}
void MangHop(int n , int m , int a[] , int b[]){
    
    set<int> s;
    set<int>:: iterator it;
    for(int i=0 ; i<n ; i++){
        s.insert(a[i]);
    }
    for(int i=0 ; i<m ; i++){
        s.insert(b[i]);
    }
    priority_queue<int,vector<int>,greater<int> > pq;
    for(it = s.begin() ; it!=s.end() ;it++){
        pq.push(*it);
    }
    while(!pq.empty()){
        int tmp = pq.top();
        pq.pop();
        cout << tmp << " ";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        for(int i=0 ; i<m ;i++){
            cin >> b[i];
        }
        MangHop(n,m,a,b);
        cout << endl;
        MangGiao(n,m,a,b);
        cout << endl;
    }
    return 0;
}
