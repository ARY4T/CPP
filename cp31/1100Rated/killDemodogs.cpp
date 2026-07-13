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
    ll mod = 1e9 + 7;
    while (tc--)
    {
        ll n;
        cin >> n;
        int i = 1, j = 1;
        ll t1 = (n) % mod;
        ll t2= (n + 1) % mod;
        ll t3 = (4 * n - 1) % mod;
        ll t4 = 337;
        
        ll ans = t1*t2;
        ans %= mod;
        ans *= t3;
        ans %= mod;
        ans *= t4;
        ans %= mod;

        cout << ans << nl;
    }

}