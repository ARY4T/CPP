#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    int N = 1e6+1;

    vector<int> s(N);
    for(int i=0; i<N; ++i){
        s[i] = i;
    }

    for(int i=2; i*i<N; ++i){
        if(s[i] == i){
            for(int j=i*i; j<N; j+=i){
                if(s[j] == j) s[j] = i;
            }
        }
    }

    while(tc--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; ++i){
            cin>>v[i];
        }

        unordered_map<int, int> mp;
        for(int i=0; i<n; ++i){
            int el = v[i];

            
                while(el != 1){
                    mp[s[el]]++;
                    el /= s[el];  
                }
            
        }

        bool possible = true;

        for(auto &[el, frq]:mp){
            if(frq%n != 0){
                possible = false;
                break;
            }
        }

        if(possible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }       
  
}