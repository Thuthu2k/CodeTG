#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        set<char> st;
        for (int i = 0; i < s.length(); i++)
            st.insert(s[i]);
        int n = st.size();
        int i = 0, j = 1;
        mp[s[i]]++;
        int c = 0;
        c++;
        int mi = 1000005;
        while (i <= j && j < s.length())
        {
            if (c < n)
            {
                if (mp[s[j]] == 0)
                    c++;
                mp[s[j]]++;
                j++;
            }
            else if (c == n)
            {
                mi = min((j - i), mi);
                if (mp[s[i]] == 1)
                    c--;
                mp[s[i]]--;
                i++;
            }
        }
        while (c == n)
        {
            mi = min((j - i), mi);
            if (mp[s[i]] == 1)
                c--;
            mp[s[i]]--;
            i++;
        }
        cout << mi << endl;
    }
    return 0;
}