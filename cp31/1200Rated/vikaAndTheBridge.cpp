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
        int n, k;
        cin >> n >> k;

        vector<int> c(n);
        for (auto &el : c)
            cin >> el;

        vector<int> last(k, -1);
        vector<int> maxStep(k, 0), maxStep2(k, 0);

        for (int i = 0; i < n; ++i)
        {
            int step = i - last[c[i] - 1];
            if (step > maxStep[c[i] - 1])
            {
                maxStep2[c[i] - 1] = maxStep[c[i] - 1];
                maxStep[c[i] - 1] = step;
            }
            else if (step > maxStep2[c[i] - 1])
            {
                maxStep2[c[i] - 1] = step;
            }

            last[c[i] - 1] = i;
        }

        for (int i = 0; i < k; ++i)
        {
            int step = n - last[i];
            if (step > maxStep[i])
            {
                maxStep2[i] = maxStep[i];
                maxStep[i] = step;
            }
            else if (step > maxStep2[i])
            {
                maxStep2[i] = step;
            }
        }

        int ans = 1e9;
        for (int i = 0; i < k; ++i)
        {
            ans = min(ans, max((maxStep[i] + 1 )/ 2, maxStep2[i]));
        }
        cout << ans - 1 << nl;
        ;
    }
}