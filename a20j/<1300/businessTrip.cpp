#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k; cin>>k;

    vector<int> g(12);

    for(int i=0; i<12; ++i) cin>>g[i];

    sort(g.rbegin(), g.rend());

    int sum = 0;
    int m = 0;

    for(int i=0; i<12; ++i){
        if(sum >= k) break;
        
        sum += g[i];
        m++;
    }

    if(sum >= k) cout<<m;

    else cout<<-1;
  
}