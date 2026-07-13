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

        for (auto &el : v)
            cin >> el;

        int minVal = 1, maxVal = n;

        int l = 0, r = n - 1;

        while (l < r)
        {
            if (v[l] == minVal)
            {
                l++;
                minVal++;
            }
            if (v[r] == minVal)
            {
                r--;
                minVal++;
            }

            if (v[l] == maxVal)
            {
                l++;
                maxVal--;
            }

            if (v[r] == maxVal)
            {
                r--;
                maxVal--;
            }

            if (v[l] != minVal && v[r] != minVal && v[l] != maxVal && v[r] != maxVal)
                break;
        }

        if (l < r)
        {
            cout << l + 1 << " " << r + 1 << nl;
        }
        else
            cout << -1 << nl;
    }
}