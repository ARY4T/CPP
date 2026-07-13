#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; ++i){
            cin>>v[i];
        }

        vector<ll> prefixSumEven(n+2, 0);
        vector<ll> prefixSumOdd(n+2, 0);

        for(int i=0; i<n; ++i){
            if((i+1)&1){
                prefixSumOdd[i+1] = prefixSumOdd[i] + v[i];
                prefixSumOdd[i+2] = prefixSumOdd[i+1]; 
            }
            else{
                prefixSumEven[i+1] = prefixSumEven[i] + v[i];
                prefixSumEven[i+2] = prefixSumEven[i+1];
            }
        }

        set<ll> st;
        st.insert(0);

        bool isPossible = false;

        for(int i=1; i<=n; ++i){
            if(st.find(prefixSumOdd[i] - prefixSumEven[i]) != st.end()){
                isPossible = true;
                break;
            }
            st.insert(prefixSumOdd[i] - prefixSumEven[i]);
        }

        if(isPossible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}