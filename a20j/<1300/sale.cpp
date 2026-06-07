#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;
    
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin>>v[i];

    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<m; ++i){
        if(v[i] < 0) ans += abs(v[i]);
        else break;
    }

    cout<<ans;
  
}