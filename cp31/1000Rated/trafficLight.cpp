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
        char c;
        cin >> c;
        string s;
        cin >> s;

        int firstG;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'g')
            {
                firstG = i;
                break;
            }
        }

        vector<int> suffixG(n);

        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == 'g')
                firstG = i;
            suffixG[i] = firstG;
        }

        int ans = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == c)
            {
                if (suffixG[i] < i)
                {
                    ans = max(ans, n - i + suffixG[i]);
                    continue;
                }
                ans = max(ans, suffixG[i] - i);
            }
        }
        cout << ans << nl;
    }
}