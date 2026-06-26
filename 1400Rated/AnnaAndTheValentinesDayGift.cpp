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
        int n, m;
        cin >> n >> m;

        vector<string> num(n);
        int len = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> num[i];
            len += num[i].size();
        }

        multiset<int> enZero;

        for (int i = 0; i < n; i++)
        {
            int zero = 0;

            for (int j = num[i].size() - 1; j >= 0; --j)
            {
                if (num[i][j] == '0')
                    zero++;
                else
                    break;
            }
            enZero.insert(zero);
        }

        for (auto it = enZero.rbegin(); it != enZero.rend(); it++)
        {
            len -= *it;
            it++;
            if (it == enZero.rend())
                break;
        }

        if (len >= m + 1)
            cout << "Sasha" << nl;
        else
            cout << "Anna" << nl;
    }
}