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
        vector<int> v(m);
        for (int &el : v)
            cin >> el;

        sort(v.begin(), v.end());

        vector<int> gaps(m);

        for (int i = 0; i < m - 1; ++i)
        {
            gaps[i] = v[i + 1] - v[i] - 1;
        }
        gaps[m - 1] = n - v[m - 1] + v[0] - 1;

        int ans = 0;
        sort(gaps.rbegin(), gaps.rend());

        int sub = 1;

        
        
            for (int i = 0; i < m; ++i)
            {
            if (gaps[i] - sub > 0)
                ans += gaps[i] - sub;

            else if(gaps[i] - sub == 0) ans+=1;

            else
                break;
                
            sub += 4;
            }
        
        

        cout << n - ans << nl;
    }
}