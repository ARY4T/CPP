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
        int x;
        cin >> x;
        int ans = INT_MIN;
        int y;

        for (int i = x - 1; i >= 1; --i)
        {
            int res = gcd(i, x) + i;
            if(res > ans){
                y = i;
                ans = res;
            }
            if (x % i == 0) break;
        }

        cout << y << nl;
    }
}