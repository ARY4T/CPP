#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;
        cin>>n;
        map<int,int, greater<int>> mpp;
        for(int i=0;i<n;++i){
            int el;cin>>el;
            mpp[el]++;
        }
        int ans = 0;
        for(auto [val, cnt]:mpp){
            if(ans < cnt) ans += cnt - ans;
        }
        

        

        cout<<ans;
    }      
    return 0;   
}