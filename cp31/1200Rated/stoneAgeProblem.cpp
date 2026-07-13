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
    int q;
    cin >> q;

    vector<int> v(n);
    ll totSum = 0;

    for (int &el : v)
    {
        cin >> el;
        totSum += el;
    }

    vector<int> lastUpdated(n, 0);

    int fallbackTime = 0;
    int fallbackVal = 0;

    for(int timer=1; timer<=q; ++timer)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int pos;
            cin >> pos;
            pos--;
            int el;
            cin >> el;

            int currVal = (fallbackTime > lastUpdated[pos])? fallbackVal: v[pos];

            totSum += el-currVal;

            v[pos] = el;
            lastUpdated[pos] = timer;
        }
        else
        {
            int el;
            cin >> el;
            totSum = (ll)n * el;

            fallbackTime = timer;
            fallbackVal = el;
            
        }
        cout << totSum << nl;
    }
}