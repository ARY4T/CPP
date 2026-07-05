#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;


bool helper(int k, vector<pair<int, int>> &s){
    int mn = 0;
    int mx = 0;

    for(int i=0; i<s.size(); ++i){
        mn-=k;
        mx+=k;

        if(s[i].first>mx || s[i].second < mn){
            return false;
        }
        else{
            mx = min(mx, s[i].second);
            mn = max(mn, s[i].first);
        }
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        vector<pair<int, int>> seg;

        for(int i=0; i<n; ++i){
            int l, r;
            cin>>l>>r;

            seg.pb({l, r});
        }

        int low = 0, high = 1e9;

        while(low<=high){
            int mid = (high-low)/2 + low;

            if(helper(mid, seg)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        cout<<low<<nl;
    }      
  
}