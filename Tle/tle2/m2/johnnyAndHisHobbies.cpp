#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> temp(1024, 0);

        for (auto &el : v)
        {
            cin >> el;
            temp[el]++;
        }
        int ans = -1;
        for (int k = 1; k <= 1023; ++k)
        {
            vector<int> freq(1024, 0);
            for (int i = 0; i < n; ++i)
            {
                freq[v[i] ^ k]++;
            }
            bool flag = true;
            for (int i = 0; i < 1024; ++i)
            {
                if (temp[i] != freq[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans = k;
                break;
            }
        }
        cout << ans << nl;
    }
}