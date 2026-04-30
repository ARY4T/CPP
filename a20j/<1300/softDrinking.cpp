#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};


    int n, k, l, c, d, p, nll, np;
    cin >> n >> k >> l >> c >> d >> p >> nll >> np;

    int ans = min((k*l) / nll, c*d);
    ans = min(ans, p / np);

    cout << ans/n;
}