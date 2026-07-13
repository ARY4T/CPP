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
        int n; cin >> n;
        ll k; cin >> k;
        ll b; cin >> b;
        ll s; cin >> s;

        ll minSum = b*k;
        ll maxSum = b*k + n*(k-1);

        if(s < minSum || s > maxSum) cout<<-1<<nl;

        else{
            vector<ll> ans(n);
            ans[0] = minSum;
            s -= minSum;
            for(int i=0; i<n; ++i){
                ll add = min(s, k-1);
                ans[i] += add;
                s -= add;
            }

            for(auto el:ans) cout<<el<<" ";
            cout<<nl;
        }
        

    }
}