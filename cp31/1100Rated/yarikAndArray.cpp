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
        for(auto &el:v)cin>>el;

        ll ans = INT_MIN;
        int i=0,j=0;
        ll sum = 0;
        while(j<n){
            if(sum < 0){
                sum = 0;
                i=j;
            }
            if(i<j){
                if((v[j]^v[j-1])&1) sum += v[j];
            
                else{
                    sum=v[j];
                    i=j;
                }
            }
            else{
                sum = v[j];
            }
            ans = max(ans, sum);
            j++;
        }
        cout<<ans<<nl;

    }      
}