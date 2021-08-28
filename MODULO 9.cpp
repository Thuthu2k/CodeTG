#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
typedef long long int lli;
lli C[1005][1005];
void result()
{
    memset(C, 0, sizeof(C));
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
                C[i][j] %= mod;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    result();
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        cout << C[n][r] << endl;
    }
    return 0;
}
