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
        vector<int> c(n);
        for (auto &el : c)
            cin >> el;

        sort(c.begin(), c.end());

        ll sum = 1;
        bool flag = true;
        if (c[0] != 1)
            cout << "NO" << nl;
        else
        {
            for (int i = 1; i < c.size(); ++i)
            {   
                
                if (c[i] <= sum){
                    sum+=c[i];
                    continue;
                }
                    
                flag = false;
                break;
            }
            if (!flag)
                cout << "NO" << nl;
            else
                cout << "YES" << nl;
        }
    }
}