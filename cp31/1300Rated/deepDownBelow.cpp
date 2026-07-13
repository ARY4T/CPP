#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        vector<vector<int>> monsters;

        for(int i=0; i<n; ++i){
            int k; cin>>k;
            vector<int> cave;

            while(k--){
                int el; cin>>el;
                cave.push_back(el);
            }

            monsters.push_back(cave);
        }

        map<int, vector<vector<int>>> mp;

        int ind = 0;

        while(ind<n){
            ll minPower = monsters[ind][0]+1;
            ll power = minPower;

            for(int i=0; i<monsters[ind].size(); ++i){
                if(power > monsters[ind][i]) power++;
                else {
                    minPower += monsters[ind][i] - power + 1;
                    power = monsters[ind][i] + 2;
                }
            }

            mp[minPower].push_back(monsters[ind]);
            ind++;
        }

        vector<vector<int>> caveMonters;

            for(auto [el, val]:mp){
                for(auto j:val){
                    caveMonters.push_back(j);
                }
                
            }
        

        ll ans = caveMonters[0][0] +  1;
        ll power = ans;

        ind = 0;
        while(ind<n){
            for(int i=0; i<caveMonters[ind].size(); ++i){
                if(power > caveMonters[ind][i]) power++;
                else {
                    ans += caveMonters[ind][i] - power + 1;
                    power = caveMonters[ind][i] + 2;
                }
            }
            ind++;
        }
        
        cout<<ans<<nl;
    }      
  
}