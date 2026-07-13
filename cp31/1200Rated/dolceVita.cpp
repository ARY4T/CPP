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
        int n, x;
        cin >> n >> x;

        vector<ll> cost(n);

        for (ll &el : cost)
        {
            cin >> el;
        }

        sort(cost.begin(), cost.end());

        vector<ll> prefixSum(n + 1, 0);

        for (int i = 1; i <= n; ++i)
        {
            prefixSum[i] = prefixSum[i - 1] + cost[i - 1];
        }

        ll totPackets = 0;

        for (int i = 1; i <= n; ++i)
        {
            if (x - prefixSum[i] < 0)
                break;

            totPackets += (x - prefixSum[i])/i + 1;
            
        }
        cout << totPackets << nl;
    }
}