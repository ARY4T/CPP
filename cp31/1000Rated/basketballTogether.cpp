#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll d;
    cin >> d;

    vector<ll> power(n);
    for (auto &el : power)
        cin >> el;

    sort(power.begin(), power.end());

    int left = 0;
    int right = n - 1;

    int wins = 0;
    while (left <= right)
    {
        int players = d / power[right];

        if (players + left <= right)
        {
            wins++;
            left += players;
            right--;
        }
        else
            break;
    }
    cout << wins << nl;
}