#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);
        
        for(auto &el:v) cin>>el;

        map<int,int> prev_occ;
 
        int ans =0;
        int start =0;
        for(int i=0;i<n;++i){
            if(prev_occ.count(v[i])){
                start = max(start, prev_occ[v[i]]+1);
            }

            prev_occ[v[i]] = i;
            ans = max(ans, i-start+1);
        }
        cout<<ans;

    }      
    return 0;   
}