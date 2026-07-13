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
        int oddCnt = 0;

        for(int i=0;i<n;++i){
            cin>>v[i];
            if(v[i]%2==1) oddCnt++;
        }

        if(oddCnt%2==0) cout<<0<<nl;
        else{
            int ans = INT_MAX;
            
            for(int i=0; i<n; ++i){
                int ops = 0;
                if(v[i]%2 == 1){
                    while(v[i]%2 == 1){
                        ops++;
                        v[i] /= 2;
                    }
                    ans = min(ans, ops);
                }
                else{
                    while(v[i]%2 == 0){
                        ops++;
                        v[i] /= 2;
                    }
                    ans = min(ans, ops);
                }
            }
            cout<<ans<<nl;
        }


    }      
    return 0;   
}