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
        vector<int> v(n);

        for(int i=0; i<n; ++i){
            cin>>v[i];
        }
        
        vector<int> diffElToLeft(n);
        diffElToLeft[0] = -1;

        for(int i=1; i<n; ++i){
            if(v[i] == v[i-1]) diffElToLeft[i] = diffElToLeft[i-1];
            else diffElToLeft[i] = i-1;
        }

        int q;
        cin>>q;
        while(q--){
            int l, r;
            cin>>l>>r;
            l--;
            r--;
            int idx = diffElToLeft[r];
            if(idx < l) cout<<-1<<" "<<-1<<nl;
            else cout<<idx+1<<" "<<r+1<<nl;
        }

        cout<<nl;
    }      
  
}