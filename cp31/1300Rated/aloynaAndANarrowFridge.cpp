#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, h; 
    cin>>n>>h;
    
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin>>v[i];

    int ans = 0;

    for(int i=1; i<=n; i++){
        vector<int> cur(v.begin(), v.begin()+i);

        sort(cur.rbegin(), cur.rend());

        ll curh = 0;

        for(int j=0; j<i; j+=2){
            curh += cur[j];
        }
        
        if(curh<=h) ans = i;
        else{
            break;
        }
    }
    cout<<ans;
  
}