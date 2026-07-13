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
        int x;
        cin >> x;
        int ans = INT_MAX;

        while (x)
        {
            int num = x % 10;
            ans = min(ans, num);
            x /= 10;
        }
        cout << ans << nl;
    }
}