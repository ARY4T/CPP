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
        vector<vector<char>> grid(8, vector<char>(8));

        for (auto &el : grid)
        {
            for (auto &m : el)
            {
                cin >> m;
            }
        }

        char ans = 'B';

        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (grid[i][j] != 'R')
                    break;
                if (j == 7)
                    ans = 'R';
            }
        }

        cout << ans << nl;
    }
}