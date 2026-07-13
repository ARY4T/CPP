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
        vector<int> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }

        int l = 0, r = 0;

        int i = 0;
        for (i; i < n; ++i)
        {
            if (p[i] != n - i)
            {
                l = i;
                break;
            }
        }

        for (i; i < n; ++i)
        {
            if (p[i] == n - l)
            {
                r = i;
                break;
            }
        }

        reverse(p.begin() + l, p.begin() + r + 1);

        for (int &el : p)
            cout << el << " ";
        cout << nl;
    }
}