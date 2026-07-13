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
        vector<int> weights(n);
        for(auto &el:weights) cin>>el;

        int i=0, j=n-1;
        ll w1=weights[0],w2=weights[n-1];
        int ans =0;
        while(i<j){
            if(w1<w2){
                i++;
                if(i>=j) break;
                w1 += weights[i];
            }
            else if(w1>w2){
                j--;
                if(j<=i) break;
                w2 += weights[j];
            }
            else{
                ans = max(ans, i+1+n-j);
                i++;j--;
                if(i>=j) break;
                w1 += weights[i];
                w2 += weights[j];
            }
        }
        cout<<ans<<nl;

    }      
    return 0;   
}