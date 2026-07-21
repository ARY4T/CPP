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
        int n, c;
        cin>>n>>c;

        vector<ll> v(n);
        for(int i=0; i<n; ++i) cin>>v[i];

        sort(v.begin(), v.end());

        int l = 0, r = n-1;
        ll sum = 0;

        while(l<=r){
            if(v[l]<c){
                sum += v[r]-c;
                l++;
                r--;  
            }
            else {
                sum+=v[r]-c;
                r--;
            }
        }

        cout<<sum<<nl;
    }      
  
}