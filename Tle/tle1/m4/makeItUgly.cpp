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

        vector<int> distIndex;

        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        for(int i=1;i<n-1;++i){
            if(v[i] != v[0]) {

                distIndex.push_back(i);
            }
        }

        if(distIndex.size() == 0){
            cout<<-1<<nl;
        }
        else{
            int ans=INT_MAX;
            for(int i=1;i<distIndex.size();++i){
                ans = min(ans, distIndex[i]-distIndex[i-1]-1);
            }

            ans = min(ans, distIndex[0]);
            ans = min(ans, n-1-distIndex[distIndex.size()-1]);
            cout<<ans<<nl;
        }
        
        
    }      
    return 0;   
}