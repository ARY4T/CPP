#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    cin >> tc;

    while (tc--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> preEnemy(n+1);

        for (int i = 0; i < m; ++i)
        {
            int a, b;
            cin >> a >> b;
            if (a > b) swap(a, b);

            preEnemy[b] = max(preEnemy[b], a);
        }

        ll ans = 0;
        int maxInvalid = 0;

        for (int i = 1; i <= n; ++i)
        {   
            maxInvalid = max(maxInvalid, preEnemy[i]);
            ans += (i-maxInvalid);
        }

        cout << ans << nl;
    }
}