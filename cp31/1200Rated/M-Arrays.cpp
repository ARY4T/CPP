#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,m;
        cin>>n>>m;

        unordered_map<int, int> mp;
        for(int i=0; i<n; ++i){
            int el;
            cin>>el;
            el%=m;
            mp[el]++;
        }
        int ans = 0;

        for(auto &[el, cnt] : mp){
            if(el == 0) {
                ans++;
                continue;
            }

            if(m-el == el){
                ans++;
            }

            else if(mp.find(m-el) != mp.end()){
                if(cnt == mp[m-el]) ans++;
                else {
                    int sub = min(cnt, mp[m-el])+1;
                    ans++;
                    ans += max(cnt, mp[m-el]) - sub;
                }
                mp.erase(m-el);
            }
            else {
                ans += cnt;
            }
        }

        cout<<ans<<nl;

    }      
  
}