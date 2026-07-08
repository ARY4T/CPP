#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; ++i) cin>>v[i];

        int ones = 0, twos = 0, threes = 0;

        int ind = 0;

        bool o = false, t = false, th = false;

        for(ind; ind<n; ++ind){
            if(v[ind] == 1) ones++;
            else if(v[ind] == 2) twos++;
            else threes++;

            if(ones >= twos+threes) {
                
                ind+=1;
                while(ind<n && v[ind] == 3) {
                    threes++;
                    if(ones >= twos+threes)
                    ind++;
                    else break;
                }
                o = true;
                break;
            }
        }
        ones = 0, twos = 0, threes = 0;
        for(ind; ind<n; ++ind){
            if(v[ind] == 1) ones++;
            else if(v[ind] == 2) twos++;
            else threes++;

            if(ones+twos >= threes) {
                t = true;
                break;
            }
        }

        if(ind != n-1) th = true;

        if(o && t && th) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
        
    }      
  
}