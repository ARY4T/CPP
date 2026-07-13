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
        vector<int> ans(n);
        
        for(int i=0; i<n; ++i){
            int el; cin>>el;
            ans[i] = n+1-el;
        }

        for(auto el:ans)cout<<el<<" ";
        cout<<nl;
    }
}
