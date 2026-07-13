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
        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        vector<bool> visited(n);

        ll currOr = 0;

        for(int step=0; step<min(31, n); ++step){
            ll maxVal = -1;
            int bestInd = -1;

            for(int i=0; i<n; ++i){
                if(!visited[i]){
                    ll potential = currOr | v[i];
                    if(potential>maxVal){
                        maxVal = potential;
                        bestInd = i;
                    }
                }       
            }

            if(bestInd != -1){
                visited[bestInd] = 1;
                cout<<v[bestInd]<<" ";
                currOr = maxVal;
            }
        }

        for(int i=0; i<n; ++i){
            if(!visited[i]) cout<<v[i]<<" ";
        }
        cout<<nl;
    }      
  
}