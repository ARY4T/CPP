#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k,q;
        cin>>n>>k>>q;

        vector<int> v(n);
        for(auto &el:v){
            cin>>el;
            el = el>q ? 0 : 1;
        }

        ll countOf1s = 0;
        ll ways = 0;

        for(int i=0;i<n;++i){
            if(v[i] == 1) countOf1s++;
            else{
                if(countOf1s >= k){
                    ll mult = (countOf1s - k + 1);
                    ways += (mult)*(mult+1)/2;
                }
                countOf1s=0;
            }
        }

        if(countOf1s >= k){
            ll mult = (countOf1s - k + 1);
            ways += (mult)*(mult+1)/2;
        }
            
        cout<<ways<<nl;

    }      
}