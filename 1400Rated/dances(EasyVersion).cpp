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

        vector<int> a(n), b(n);
        a[0] = 1;

        for (int i = 1; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ops = 0;

        int indA = n - 1;
        int indB = n - 1;

        while (indA >= 0)
        {
            if (a[indA] >= b[indB])
            {
                ops++;
                indA--;
            }
            else
            {
                indA--;
                indB--;
            }
        }

        cout << ops << nl;
    }
}