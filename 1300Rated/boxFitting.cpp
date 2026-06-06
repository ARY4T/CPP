#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, w;
        cin>>n>>w;

        unordered_map<int, int> mp;

        for(int i=0; i<n; ++i){
            int el;cin>>el;
            mp[el]++;
        }

        int height = 0;
        
        while(!mp.empty()){
            int remW = w;
            
            for(int i=20; i>=0; --i){
                if(remW >= (1<<i)){
                    if(mp.find(1<<i) == mp.end()) continue;
                    int frq = min(remW/(1<<i), mp[1<<i]);

                    remW -= (1<<i) * frq;

                    mp[1<<i] -= frq; 

                    if(mp[1<<i] == 0) mp.erase(1<<i);
                }
            }

            height++;
        }
        
        cout<<height<<nl;
    }
}