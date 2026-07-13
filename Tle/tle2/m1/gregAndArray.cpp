#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n);
    for(auto &el:v) cin>>el;

    vector<int> l(m), r(m), d(m);

    for(int i=0;i<m;++i){
        cin>>l[i]>>r[i]>>d[i];
    }

    vector<ll> opCount(m+1);
    for(int i=0;i<k;++i){
        int x,y;
        cin>>x>>y;
        opCount[x-1]++;
        opCount[y]--;
    }

    for(int i=1;i<m;++i){
        opCount[i] += opCount[i-1];
    }

    vector<ll> finalIncrement(n+1);
    for(int i=0;i<m;++i){

        finalIncrement[l[i]-1] += opCount[i]*d[i];
        finalIncrement[r[i]] -= opCount[i]*d[i]; 
    }

    for(int i=1;i<n;++i){
        finalIncrement[i] += finalIncrement[i-1];
    }
    
    for(int i=0;i<n;++i){
        v[i] += finalIncrement[i];
    }

    for(auto &el:v){
        cout<<el<<" ";
    }
}