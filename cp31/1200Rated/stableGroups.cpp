#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};

    while (tc--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        vector<ll> v(n);
        for (ll &el : v)
            cin >> el;

        sort(v.begin(), v.end());
        int grps = 1;
        
        vector<ll> costNeeded;

        for(int i=1; i<n; ++i){
            if(v[i]-v[i-1] > x){
                grps++;
                costNeeded.push_back(v[i]-v[i-1]);
            }
        }

        sort(costNeeded.begin(), costNeeded.end());

        for(int i=0; i<costNeeded.size(); ++i){
           ll cost = (costNeeded[i]-1)/x;
           if(k>=cost) {
            k-=cost;
            grps--;
           }
           else break;
        }

        cout << grps << nl;
    }
}