#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        long long a[n];
        for (int i=1 ; i<=n ; i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        long long ans=0;
        for(int i=1 ; i<n ; i++){
            int id = lower_bound(a+i , a+1+n , a[i]+k)-a-1;
            ans += id-i;
        }
        cout << ans << endl;
    }
    
    return 0;
}
