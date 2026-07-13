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

        int minx = n, miny = m;
        int maxx = -1, maxy = -1;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
            for (int j = 0; j < m; ++j)
            {

                if (grid[i][j] == '#')
                {
                    maxx = max(maxx, i);
                    minx = min(minx, i);

                    maxy = max(maxy, j);
                    miny = min(miny, j);
                }
            }
        }
        cout << (maxx + minx) / 2 +1<< " " << (maxy + miny) / 2 +1<< nl;
    }
}