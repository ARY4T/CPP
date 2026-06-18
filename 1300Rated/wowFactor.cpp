#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();
    ll ans = 0;

    int ws = 0;

    for(int i=0; i<n-1; ++i){
        if(s[i] == 'v' && s[i+1] == 'v') ws++;
    }
    int crws = 0;

    for(int i=0; i<n-1; ++i){
        if(s[i] == 'o'){
            ans += 1LL*(crws)*(ws-crws);
        }

        if(s[i] == 'v' && s[i+1] == 'v') crws++;
    }



    cout << ans;
}