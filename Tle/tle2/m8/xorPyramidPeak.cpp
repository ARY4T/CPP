#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N = 2e5;
    vector<int> powerOf2(N);

    powerOf2[2] = 1;
    for(int i=3; i<N; ++i){
        powerOf2[i] = i/2 + powerOf2[i/2];
    }

    int n;cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; ++i){
        cin>>v[i];
    }

    int ans = 0;

    for(int i=0; i<n; ++i){
        int c1 = powerOf2[n-1];
        int c2 = powerOf2[i];
        int c3 = powerOf2[n-1-i];

        if(c1-c2-c3 == 0){
            ans ^= v[i];
        }
    }

    cout<<ans;
  
}